#include "libft.h"

char	*ft_realloc(int size, char *string, char *s)
{
	char	*temp;
	char	*temp2;

	temp = ft_strdup(string, ft_strlen(string));
	free(string);
	temp2 = ft_strdup(s, size);
	string = ft_strjoin(temp, temp2);
	free(temp);
	free(temp2);
	return (string);
}

char	**ft_realloc_list(char **matrix, int size)
{
	char	**temp;
	int		i;

	i = 0;
	temp = calloc(size + 2, sizeof(char **));
	while (i < size)
	{
		temp[i] = ft_strdup(matrix[i], ft_strlen(matrix[i]));
		free(matrix[i]);
		i++;
	}
	free(matrix[i]);
	free(matrix);
	return (temp);
}

int	check_if_closed(char *s)
{
	int		i;
	char	quote;

	i = 1;
	quote = *s;
	while (s[i])
	{
		if (s[i] == *s)
			return (i);
		i++;
	}
	return (0);
}

char **split_set_quotes(char *s, char *set)
{
	char	**matrix;
	char	quote;
	int		i, j, k;

	i = 0, j = 0, k = 0;
	matrix = calloc(1, sizeof(char *));
	while (*s)
	{
		if (*s == '"' || *s == '\'')
		{
			k = check_if_closed(s);
			if (k > 0)
			{
				matrix[j] = ft_realloc(k, matrix[j], s);
				s += k;
			}
		}
		if (ft_strchr(set, *s))
		{
			if (matrix[j] != NULL)
			{
				matrix = ft_realloc_list(matrix, j + 1);
				j++;
			}
			if ((*s == '<' || *s == '>') && s[1]  == *s)
			{
				matrix[j] = ft_realloc(2, matrix[j], s);
				s += 2;
				if (*s != '\0' && *s != ' ')
				{
					matrix = ft_realloc_list(matrix, j + 1);
					j++;
				}
				continue ;
			}
			else
			{
				matrix[j] = ft_realloc(1, matrix[j], s);
				s++;
				if (*s != '\0' && *s != ' ')
				{
					matrix = ft_realloc_list(matrix, j + 1);
					j++;
				}
				continue ;
			}
		}
		if (*s == ' ')
		{
			while (*s && *s == ' ')
				s++;
			if (*s == '\0')
				break ;
			matrix = ft_realloc_list(matrix, j + 1);
			j++;
			continue ;
		}
		matrix[j] = ft_realloc(1, matrix[j], s);
		s++;
	}
	for(int p =0;matrix[p];p++)
		printf("matrix %d = %s\n", p, matrix[p]);
	return matrix;
}

int main(int argc, char const *argv[])
{
	split_set_quotes("\"echo\" 'allo'<<> ds\"dasjdk'sa", "<>|");
	return 0;
}