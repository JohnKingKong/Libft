/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:37:54 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/17 18:12:37 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct strrchr

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c);
int		ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i  = ft_strlen(s);
	while (--i > 0)
		s++;
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return NULL;
}
