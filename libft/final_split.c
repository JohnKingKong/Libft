#include "libft.h"

int	check_close(char *s, char quote, int i)
{
	int	j;

	j = i + 1;
	while (s[j] && s[j] != quote)
		j++;
	if (s[j] != quote)
		return (0);
	return (j);
}

int	cnt_words(char *s, char *set, char c)
{
	int		i;
	int		tkns;
	int		j;
	char	quote;

	i = 0;
	tkns = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
		{
			printf("oooooo\n");
			tkns++;
		}
		else if (s[i] == '"' || s[i] == '\'')
		{
			quote = s[i];
			j = check_close(s, quote, i);
			if (j > 0)
				i = j;
		}
		else if (ft_strchr(set, s[i]))
		{
			if (s[i + 1] && s[i + 1] == s[i])
				i++;
			tkns++;
			printf("aaaaa\n");
			i++;
			continue ;
		}
		else if (s[i] == c)
		{
			while (s[i + 1] == c)
				i++;
			if (s[i - 1] && s[i + 1] != '\0')
			{
				printf("ahhhhh\n");
				tkns++;
			}
		}
		i++;
		printf("her char %c\n", s[i]);
	}
	printf("tkns = %d\n", tkns);
	return (tkns);
}

char	**split_it(char *s, char *set, char c)
{
	char		**matrix_out;
	t_indexes	i;
	int			nb_tkns;

	matrix_out = NULL;
	init_index(&i);
	nb_tkns = cnt_words(s, set, c);
	return (matrix_out);
}

int main(int argc, char const *argv[])
{
	char **retour;

	char * line = "zero une<deux         ";
	retour = split_it(line, "<|>", ' ');
	return 0;
}