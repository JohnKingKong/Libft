/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:00:02 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/22 11:00:05 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui retourne un tableau de chaines de char obtenu
// en separant s a laide de c comme delimitateur

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(size_t) * 2);
	tab[0] = malloc(ft_strlen(s));
	tab[1] = malloc(ft_strlen(s));
	while (!(*s == c))
	{
		tab[0][i] = *s;
		i++;
		s++;
	}
	if (*s == c)
		s++;
	while (*s)
	{
		tab[1][j] = *s;
		j++;
		s++;
	}
	free (tab);
	return (tab);
}
