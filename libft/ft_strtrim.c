/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:25:51 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/21 17:33:33 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui retourne une copie de s1, sans les chars specifies
// dans set au debut et a la fin

#include "libft.h"

static	int	check_set(int i, const char *s1, const char *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*final;

	final = malloc(ft_strlen(s1) + 1);
	ft_bzero(final, ft_strlen(final));
	i = 0;
	l = 0;
	if (!(s1) || !(set))
		return (NULL);
	while (s1[i])
	{
		if (check_set(i, s1, set))
		{
			final[l] = s1[i];
			l++;
		}
		j = 0;
		k = 0;
		i++;
	}
	final[l] = '\0';
	return (final);
}
