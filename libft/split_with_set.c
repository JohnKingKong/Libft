#include "libft.h"
#include <stdbool.h>

int	check_for_closure(char *string, int i, char quote)
{
	i++;
	while (string[i])
	{
		if (string[i] == quote)
			return (i);
		i++;
	}
	return (0);
}

int	is_in_set(char	*string, char *set, t_indexes *index)
{
	if (ft_strchr(set, string[index->j]))
	{
			printf("stringggggggggggggg char %c\n", string[index->j]);
			index->k++;
		return (0);
	}
	return (1);
}

void	is_a_quote(char *string, t_indexes *index)
{
	int			quotes_closed;
	char		quote;

	if (string[index->j] == '"'
		|| string[index->j] == '\'')
	{
		quote = string[index->j];
		printf("avant quote closed %d\n", index->j);
		quotes_closed = check_for_closure(string, index->j, quote);
		printf("quote closed = %d\n", quotes_closed);
		if (quotes_closed > 0)
			index->j = quotes_closed;
	}
}

int	cnt_tkn_set(char **matrix_in, char *set)
{
	t_indexes	index;

	init_index(&index);
	while (matrix_in[index.i])
	{
		index.k++;
		while (matrix_in[index.i][index.j])
		{
			is_a_quote(matrix_in[index.i], &index);
			if (is_in_set(matrix_in[index.i], set, &index) == 0)
			{
				index.j++;
				continue ;
			}
			index.j++;
		}
		index.j = 0;
		index.i++;
	}
	return (index.k);
}

char	*calloc_to_delim(char *string, char *set)
{
	bool	quotes;
	char	*retour;
	int		closure;
	int		i;

	quotes = false;
	closure = 0;
	i = 0;
	while (string[i])
	{
		if (ft_strchr(set, string[i]) && quotes == false)
			break ;
		else if ((string[i] == '"' || string[i] == '\'') && quotes == false)
			quotes = true;
		else if ((string[i] == '"' || string[i] == '\'') && quotes == true)
			quotes = false;
		i++;
	}
	if (i == 0)
		i++;
	printf("iiiiiiiiiii %d\n", i);
	retour = calloc(i + 1, sizeof(char));
	return (retour);
}

int	split_quotes(char *string, t_indexes *index, char ***retour, char *set)
{
	char	quote;
	int		closure;
	int		i;

	i = index->j;
	if (string[i] == '\'' || string[i] == '"')
	{
		quote = string[i];
		closure = check_for_closure(string, i, quote);
		if (closure > 0)
		{
			ft_strlcpy(*retour[index->k], string, closure - index->j + 2);
			index->j = closure;
		}
		if (string[closure + 1] == '\0')
		{
			index->k++;
			index->l = 0;
			return (1);
		}
	}
	return (0);
}


char	**split_it(char **matrix_in, int nb_tkns, char *set)
{
	char		**matrix_out;
	char		delim;
	int			closure;
	bool		quotes;
	t_indexes	index;

	init_index(&index);
	closure = 0;
	matrix_out = calloc(nb_tkns + 1, sizeof(char *));
	while (matrix_in[index.i])
	{
		matrix_out[index.k] = calloc_to_delim(matrix_in[index.i], set);
		while (matrix_in[index.i][index.j])
		{
			if (ft_strchr(set, matrix_in[index.i][index.j]) && quotes == false)
			{
				if (index.j != 0)
				{
					index.k++;
					index.l = 0;
					matrix_out[index.k] = calloc_to_delim(matrix_in[index.i]+index.j, set);
				}
				matrix_out[index.k][index.l] = matrix_in[index.i][index.j];
				index.j++;
				printf("ahhhhhhhh %c%c%c\n", matrix_in[index.i][index.j-1], matrix_in[index.i][index.j], matrix_in[index.i][index.j+1]);
				if (matrix_in[index.i][index.j] == '\0')
					break ;
				index.k++;
				index.l = 0;
				matrix_out[index.k] = calloc_to_delim(matrix_in[index.i], set);
			}
			else if ((matrix_in[index.i][index.j] == '\'' || matrix_in[index.i][index.j] == '"') && quotes == false && check_for_closure(matrix_in[index.i], index.j, matrix_in[index.i][index.j]) > 0)
				quotes = true;
			matrix_out[index.k][index.l] = matrix_in[index.i][index.j];
			index.j++;
			index.l++;
		}
		index.j = 0;
		index.i++;
		index.k++;
		quotes = false;
		index.l = 0;
	}
	int i = 0, j = 0;
	while (matrix_out[i])
	{
		printf("string = %s\n", matrix_out[i]);
		while (matrix_out[i][j])
		{
			// printf("out %d = %c\n", j, matrix_out[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	return (matrix_out);

}

char	**split_with_set(char **matrix_in, char *set)
{
	char	**matrix_out;
	int		real_tkns;

	matrix_out = NULL;
	real_tkns = cnt_tkn_set(matrix_in, set);
	printf("nb tkns = %d\n", real_tkns);
	matrix_out = split_it(matrix_in, real_tkns, set);
	return (matrix_in);
}

int main(int argc, char const *argv[])
{
	char **retour;
	char *line;
	char	**vrairet;
	// while (1)
	{
		line = "\"allo hoo<mie\"un > trois>cinq < allo|>< \"poil\" dsasdada<><> | \0";
		retour = ft_split2(line, ' ');
		vrairet=split_with_set(retour, "<|>");
		// for(int i = 0; vrairet[i]; i++)
		// 	printf("retour %d = %s\n", i, vrairet[i]);
	}
	return 0;
}