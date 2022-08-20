/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_with_quotes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:13:27 by jvigneau          #+#    #+#             */
/*   Updated: 2022/08/20 01:15:20 by jvigneau         ###   ########          */
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
		if (string[index->k] == quote && string[index->k + 1])
		{
			index->i = index->k;
			return (0);
		}
		index->k++;
		if (string[index->k + 1] == '\'' || string[index->k + 1] == '"')
			index->k += 2;
	}
	return (1);
}

int	check_closing_quotes_int(char *string, char quote, int i)
{
	int	position;

	position = i + 1;
	while (string[position])
	{
		if (string[position] == quote && string[position + 1])
			return (0);
		position++;
		if (string[position + 1] == '\'' || string[position + 1] == '"')
			position += 2;
	}
	return (1);
}

int	check_after_quotes(char *string, t_indexes *index, char separator)
{
	if (string[index->i] == separator)
	{
		return (1);
	}
	return (0);
}

int	count_nb_arrays(char *string, char separator, t_indexes *index)
{
	while (string[index->i])
	{
		if ((string[index->i] == '"' || string[index->i] == '\'')
			&& check_closing_quotes(string, string[index->i], index) == 0)
		{
			if (check_after_quotes(string, index, separator) == 1)
			{
				printf("jashkhkajsh %c\n", string[index->i]);
				count_tkns_ptr++;
			}
			index->i++;
		}
		else if(index->i == 0 && string[index->i] != separator)
			count_tkns_ptr++;
		else if(string[index->i] != separator && string[index->i - 1] == separator)
			count_tkns_ptr++;
		index->i++;
	}
	return (count_tkns_ptr);
}


char	*fill_quotes(char *string, t_indexes *index, int i, char quote, char separator)
{
	int		start;
	int		temp;
	int		end;
	char	*retour;

	temp = i;
	start = temp;
	while (string[temp] && string[temp + 1] != quote)
	{
		temp++;
		if (string[temp + 1] == '\'' || string[temp + 1] == '"')
			temp += 2;
	}
	end = temp + 1;
	index->l = temp + 2;
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

char	*fill_no_quotes(char *string, t_indexes *index, int i, char separator)
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
	index->l = temp + 2;
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
char	*fill_array(char *string, t_indexes *index, char separator)
{
	int		temp;
	char	quote;

	temp = index->l;
	quote = string[temp];
	if ((string[temp] == '"' || string[temp] == '\'')
		&& check_closing_quotes_int(string, quote, temp) == 0)
			return(fill_quotes(string, index, temp, quote, separator));
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
		retour[index.i] = fill_array(string, &index, separator);
		index.i++;
	}
	retour[index.i] = NULL;
	return (retour);
}

int main(int argc, char const *argv[])
{
	char **retour;

	retour = split_with_quotes("un \"ca cest deux\"\"ca cest pas trois\" 'cinq over here' \"\"\" six ca cest 'quatre' homie", ' ');
	for(int i = 0; retour[i]; i++)
		printf("retour %d = %s\n", i, retour[i]);
	return 0;
}