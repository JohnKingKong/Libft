#include	"libft.h"
#include 	<stdbool.h>

void	ft_matrix_free(char **matrix)
{
	int	i;

	i = 0;
	if (matrix == NULL)
		return ;
	while (*(matrix + i))
	{
		free(*(matrix + i));
		i++;
	}
	free(matrix);
	return ;
}

size_t	check_closed(char const *s, int i)
{
	int	j;

	j = i + 1;
	while (s[j])
	{
		if (s[j] == s[i])
			return (j);
		j++;
	}
	return (0);
}

size_t	token_count(char const *s, char c)
{
	size_t	i;
	size_t	nb;
	size_t	j;

	i = 0;
	nb = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			if (s[i] == '\'')
			{
				j = check_closed(s, i);
				if (j > 0)
					i = j + 1;
				else
				{
					i++;
					continue ;
				}
			}
			else if (s[i] == '\"')
			{
				j = check_closed(s, i);
				if (j > 0)
					i = j + 1;
				else
				{
					i++;
					continue ;
				}
			}
			else if (s[i] == '<')
			{
				if (s[i + 1] == '<')
					i++;
				nb++;
				i++;
				continue ;
			}
			else if (s[i] == '>')
			{
				if (s[i + 1] == '>')
					i++;
				nb++;
				i++;
				continue ;
			}
			else if (s[i] == '|')
			{
				i++;
				nb++;
				continue ;
			}
			while (s[i] != c && s[i] && s[i] != '\'' && s[i] != '"' && s[i] != '>' && s[i] != '<' && s[i] != '|')
				i++;
			if ((s[i + 1] != '\0' ))
				nb++;
		}
	}
	printf("real nb ======== %lu\n", nb);
	return (nb);
}

char const	*quote_alloc(char const *s, char **matrix, char c, char quote)
{
	int	len_ptr;
	int	start;

	len_ptr = 0;
	start = 0;
	while (s[start] != quote && s[start] != '<' && s[start] != '>' && s[start] != '|')
		start++;
	printf("start = %d\n", start);
	if (s[start] == '<' || s[start] == '>' || s[start] == '|')
	{
		printf("ici???? %s\n", s);
		if (start[s + 1] && s[start + 1] == s[start])
			start++;
		*matrix = ft_substr(s, 0, (start));
		s = s + start - 1;
		return (s);
	}
	len_ptr = start;
	while (s[len_ptr+1] && s[len_ptr + 1] != quote && s[start] != '<' && s[start] != '>' && s[start] != '|')
		len_ptr++;
	printf("len ptr = %d\n", len_ptr);
	while (s[len_ptr + 1] && s[len_ptr + 1] != c && s[len_ptr + 1] != '<' && s[len_ptr + 1] != '>' && s[len_ptr + 1] != '|')
		len_ptr++;
	printf("sssss avant = %s\n", s);
	*matrix = ft_substr(s, 0, (len_ptr + 1));
	s = s + len_ptr;
	s++;
	while (*s == c)
		s++;
	printf("sssss = %s\n", s);
	return (s);
}

int	is_not_quote(const char *s, char c, int i, char **matrix)
{
	int	len_ptr;

	len_ptr = 0;
	while (s[len_ptr] != c && s[len_ptr] && s[len_ptr] != '<' && s[len_ptr] != '>' && s[len_ptr] != '|')
		len_ptr++;
	matrix[i] = ft_substr(s, 0, len_ptr);
	if (matrix[i] == NULL)
		ft_matrix_free(matrix);
	return (len_ptr);
}

int	quote_inside(const char *s, char c)
{
	int		i;
	char	quote;
	bool	closed;

	closed = false;
	i = 0;
	while (s[i] != c)
	{
		if ((s[i] == '\'' || s[i] == '"') && closed == false)
		{
			closed = true;
			quote = s[i];
		}
		else if (closed == true && s[i] == quote)
			return (0);
		i++;
	}
	if (closed == false)
		return (1);
	else
		return (0);
}

char	search_quote(const char *s)
{
	char	quote;
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\'' || s[i] == '"')
			quote = s[i];
		i++;
	}
	return (quote);
}

void	delim_alloc(const char *s, char **matrix, int i, char c)
{
	int j;

	j = 0;
	if (*s + 1 && *s + 1 == c)
		i++;
	matrix[i] = calloc(i + 1, sizeof(char));
	while (*s == c)
	{
		matrix[i][j] = *s;
		s++;
	}
}

void	letter_alloc(char **matrix, char const *s, char c, size_t nb_token)
{
	size_t	len_ptr;
	size_t	i;
	size_t	j;
	char	quote;

	i = 0;
	while (i < nb_token)
	{
		if (*s == c)
		{
			while (*++s == c)
				;
		}
		if (*s == '<' || *s == '>' || *s == '|')
		{
			delim_alloc(s, matrix, i, *s);
			i++;
			s++;
			continue ;
		}
		if (*s != c && *s != '\'' && *s != '\"' && quote_inside(s, c) != 0)
		{
			len_ptr = is_not_quote(s, c, i, matrix);
			s = s + len_ptr;
		}
		else if (*s != c && *s != '\'' && *s != '\"' && quote_inside(s, c) == 0)
		{
			quote = search_quote(s);
			s = quote_alloc(s, &matrix[i], c, quote);
		}
		if (*s == '\'')
		{
			j = check_closed(s, 0);
			if (j > 0)
				s = quote_alloc(s, &matrix[i], c, '\'');
			else
			{
				len_ptr = is_not_quote(s, c, i, matrix);
				s = s + len_ptr;
			}
		}
		else if (*s == '\"')
		{
			j = check_closed(s, 0);
			if (j > 0)
				s = quote_alloc(s, &matrix[i], c, '\"');
			else
			{
				len_ptr = is_not_quote(s, c, i, matrix);
				s = s + len_ptr;
			}
		}
		i++;
	}
	matrix[i] = NULL;
}

char	**ft_split2(char const *s, char c)
{
	char	**matrix;
	size_t	nb_token;

	if (!s)
		return (NULL);
	nb_token = token_count(s, c);
	matrix = (char **)calloc(sizeof(char *), nb_token + 1);
	if (!matrix)
		return (NULL);
	letter_alloc(matrix, s, c, nb_token);
	//DEBUG
		int i = 0;
		int j = 0;
	while (matrix[i])
	{
		printf("matrix = %s\n", matrix[i]);
		while (matrix[i][j])
		{
			j++;
		}
		j = 0;
		i++;
	}
	return (matrix);
}

// int main(int argc, char const *argv[])
// {
// 	char **retour;
// 	char *line;

// 	// while (1)
// 	{
// 		line = "         un\"un      un\" deux \"trois\"<cinq'cinq six\"\0";
// 		retour = ft_split2(line, ' ');
// 		for(int i = 0; retour[i]; i++)
// 			printf("retour %d = %s\n", i, retour[i]);
// 	}
// 	int k = 0;
// 	while (retour[k])
// 	{
// 		free(retour[k]);
// 		k++;
// 	}
// 	free(retour);
// 	return 0;
// }