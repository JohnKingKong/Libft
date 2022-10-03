#include "libft.h"

int	check_close(char *s, int i)
{
	char	quote;
	int		start;

	quote = s[i];
	start = i + 1;
	while (s[start])
	{
		if (s[start] == quote)
			return (start);
		start++;
	}
	return (0);
}

int	cnt_tkns(char *s, char c, char *set)
{
	int	i;
	int	tkns;
	int	j;

	i = 0;
	tkns = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == '"' || s[i] == '\'')
		{
			j = check_close(s, i);
			if (j > 0)
			{
				i = j;
				if (s[i] == '\0' || s[i] == c)
					tkns++;
			}
			else
			{
				i++;
				if (s[i] == '\0' || s[i] == c)
					tkns++;
				continue ;
			}
		}
		if (s[i + 1] == '\0' && s[i - 1] != c)
		{
			tkns++;
			i++;
			continue ;
		}
		else if (s[i + 1] == c && s[i] != c)
		{
			printf("oooo\n");
			i++;
			tkns++;
			continue ;
		}
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		i++;
	}
	return (tkns);
}

char	**split_it(char *s, char c, char *set)
{
	t_indexes	i;
	char		**matrix;
	int			tkns;

	init_index(&i);
	tkns = 0;
	matrix = NULL;
	tkns = cnt_tkns(s, c, set);
	printf("tkns = %d\n", tkns);
	return (matrix);
}

int main(int argc, char const *argv[])
{
	char **retour;

	retour = NULL;
	split_it("''    '   dsajhgsdhja \0", ' ', "<|>");
	return 0;
}