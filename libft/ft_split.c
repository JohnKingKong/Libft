/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:00:02 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/02 13:38:32 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui retourne un tableau de chaines de char obtenu
// en separant s a laide de c comme delimitateur

#include "libft.h"

int		check_nb_tabs(const char *s, char c)
{
	int	i;
	int	k;
	
	i = 0;
	k = 0;
	while (*s)
	{
		if (*s != c && k == 0)
		{
			i++;
			k = 1;
		}
		else if (*s == c)
			k = 0;
		s++;
	}
	return (i);
}

char	*malloc_mot(const char *s, int start, int finish)
{
	char *mot;
	int	i;

	i = 0;
	mot = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		mot[i++] = s[start++];
	mot[i] = '\0';
	return (mot);
}

char	**ft_split(const char *s, char c)
{
	char	**tabs;
	int		i;
	size_t	k;
	size_t	l;

	if (!s || !(tabs = malloc(check_nb_tabs(s, c) + 1 * sizeof(char *))))
				return (NULL);
	i = -1;
	k = 0;
	l = 0;
	while (k <= ft_strlen(s))
	{
		if (s[k] != c && i < 0)
			i = k;
		else if ((s[k] == c || k == ft_strlen(s)) && i >= 0)
		{
			tabs[l++] = malloc_mot(s, i, k);
			i = -1;
		}
		k++;
	}
	tabs[l] = 0;
	return (tabs);
}




























/*{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(size_t) * 2);
	tab[0] = malloc(ft_strlen(s));
	tab[1] = malloc(ft_strlen(s));
	while(*s)
	{
		while (!(*s == c))
		{
			tab[0][i] = *s;
			i++;
			s++;
		}
		if (*s == c)
			s++;
	}
	while (*s)
	{
		tab[1][j] = *s;
		j++;
		s++;
	}
	return (tab);
}*/
