/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_with_quotes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:13:27 by jvigneau          #+#    #+#             */
/*   Updated: 2022/08/19 23:54:33 by jvigneau         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define count_tkns_ptr index->j

void	init_index(t_indexes *index)
{
	index->i = 0;
	index->j = 0;
	index->k = 0;
	index->l = 0;
	return ;
}

int	check_closing_quotes(char *string, char quote, t_indexes *index)
{
	index->k = index->i + 1;
	while (string[index->k])
	{
		if (string[index->k] == quote)
		{
			index->i = index->k;
			return (0);
		}
		index->k++;
	}
	return (1);
}

int	check_closing_quotes_int(char *string, char quote, int i)
{
	int	position;

	position = i + 1;
	while (string[position])
	{
		if (string[position] == quote)
			return (0);
		position++;
	}
	return (1);
}

int	count_nb_arrays(char *string, char separator, t_indexes *index)
{
	while (string[index->i])
	{
		if ((string[index->i] == '"' || string[index->i] == '\'')
			&& check_closing_quotes(string, string[index->i], index) == 0)
			count_tkns_ptr++;
		else if(index->i == 0 && string[index->i] != separator)
			count_tkns_ptr++;
		else if(string[index->i] != separator && string[index->i - 1] == separator)
			count_tkns_ptr++;
		index->i++;
	}
	return (count_tkns_ptr);
}


char	*fill_quotes(char *string, int *index, int i, char quote)
{
	int		start;
	int		temp;
	int		end;
	char	*retour;

	temp = i;
	start = temp;
	while (string[temp] && string[temp + 1] != quote)
		temp++;
	end = temp + 1;
	*index = temp + 3;
	retour = calloc((end - start + 1), sizeof(char));
	if (!retour)
		return (NULL);
	temp = 0;
	while (start <= end)
	{
		retour[temp] = string[start];
		temp++;
		start++;
	}
	return (retour);
}

char	*fill_no_quotes(char *string, int *index, int i, char separator)
{
	int		start;
	int		temp;
	int		end;
	char	*retour;

	temp = i;
	while (string[temp] && string[temp] == separator)
		temp++;
	start = temp;
	while (string[temp] && string[temp + 1] != separator)
		temp++;
	end = temp;
	*index = temp + 2;
	retour = calloc((end - start + 1), sizeof(char));
	if (!retour)
		return (NULL);
	temp = 0;
	while (start <= end)
	{
		retour[temp] = string[start];
		temp++;
		start++;
	}
	return (retour);
}
char	*fill_array(char *string, int *index, char separator)
{
	char	*retour;
	int		temp;
	int		start;
	int		end;
	char	quote;

	temp = *index;
	quote = string[temp];
	if ((string[temp] == '"' || string[temp] == '\'')
		&& check_closing_quotes_int(string, quote, temp) == 0)
			return(fill_quotes(string, index, temp, quote));
	return(fill_no_quotes(string, index, temp, separator));
}

char	**split_with_quotes(char *string, char separator)
{
	t_indexes	index;
	int			count_tkns;

	char		**retour;

	init_index(&index);
	count_tkns = count_nb_arrays(string, separator, &index);
	retour = calloc(count_tkns, sizeof(char **) + 1);
	if (!retour)
		return (NULL);
	init_index(&index);
	while(index.i < count_tkns)
	{
		retour[index.i] = fill_array(string, &index.l, separator);
		index.i++;
	}
	retour[index.i] == NULL;
	return (retour);
}

// int main(int argc, char const *argv[])
// {
// 	char **retour;

// 	retour = split_with_quotes("un \" ca cest deux\" \"ca cest trois\" 'cinq over here' \"six ca cest 'quatre' homie", ' ');
// 	for(int i = 0; retour[i]; i++)
// 		printf("retour %d = %s\n", i, retour[i]);
// 	return 0;
// }