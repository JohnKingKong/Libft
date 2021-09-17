/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 00:48:46 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/17 18:05:12 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ecrire une fct qui reproduit a lidentique la fct strlcpy

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	if ((size <= 0) || (dst[i] == '\0') || src[i] == '\0')
		return  (0);
	k = ft_strlen(src);
	while (src[i] &&  (i + 1) < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (k);
}
