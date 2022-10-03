#include "libft.h"

char	*ft_realloc(int size, char *string, char *s)
{
	char	*temp;
	char	*temp2;

	if (string != NULL)
	{
		temp = ft_strdup2(string, ft_strlen(string));
		free(string);
		temp2 = ft_strdup2(s, size);
		string = ft_strjoin(temp, temp2);
		free(temp);
		free(temp2);
	}
	else
		string = ft_strdup2(s, size);
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
		temp[i] = ft_strdup2(matrix[i], ft_strlen(matrix[i]));
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

	i = 1;
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
	int		i;
	int		j;

	i = 0;
	j = 0;
	matrix = calloc(1, sizeof(char *));
	while (*s)
	{
		if (*s == '"' || *s == '\'')
		{
			j = check_if_closed(s);
			if (j > 0)
			{
				matrix[i] = ft_realloc(j, matrix[i], s);
				s += j;
			}
		}
		if (ft_strchr(set, *s))
		{
			if (matrix[i] != NULL)
			{
				matrix = ft_realloc_list(matrix, i + 1);
				i++;
			}
			if ((*s == '<' || *s == '>') && s[1]  == *s)
			{
				matrix[i] = ft_realloc(2, matrix[i], s);
				s += 2;
				if (*s != '\0' && *s != ' ')
				{
					matrix = ft_realloc_list(matrix, i + 1);
					i++;
				}
				continue ;
			}
			else
			{
				matrix[i] = ft_realloc(1, matrix[i], s);
				s++;
				if (*s != '\0' && *s != ' ')
				{
					matrix = ft_realloc_list(matrix, i + 1);
					i++;
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
			matrix = ft_realloc_list(matrix, i + 1);
			i++;
			continue ;
		}
		matrix[i] = ft_realloc(1, matrix[i], s);
		s++;
	}
	return matrix;
}

// int main(int argc, char const *argv[])
// {
// 	split_set_quotes("ls", "<>|");
// 	return 0;
// }