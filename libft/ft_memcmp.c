/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:23:09 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/17 18:13:24 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit t char lidentique la fct memcmp

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
		
	const unsigned char	*sa;
	const unsigned char	*sb;
	int 				i;

	sa = (const unsigned char *)s1;
	sb = (const unsigned char *)s2;
	i = 0;
	while (n >= 0)
	{
		if (sa[i] != sb[i])
			return (sa[i] - sb[i]);
		i++;
		n--;
	}
	return (0);
}
