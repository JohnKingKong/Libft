/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:57:57 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/17 16:54:34 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct memchr

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n);
int		ft_strlen(const char *s);

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	a;
	const char *src;
	int		i;

	a = (const char)c;
	i = 0;
	src = ((const char *)s);
	while (--n > 0)
	{
		if (src[i] == a)
			return ((void *)&src[i]);
		i++;
	}
return NULL;
}
