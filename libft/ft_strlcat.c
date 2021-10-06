/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 21:52:52 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/05 11:28:57 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct strlcpy

#include "libft.h" 

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(dest);
	if (size <= 0)
		return (ft_strlen(src));
	k = j;
	if (size < k)
		return (size + (ft_strlen(src)));
	while (src[i] && size > j + 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	while (src[i])
		i++;
	return (k + i);
}
//{
//	int i =  0;
//	while(*dest)
//		dest++;
//	while (*src && ((ft_strlen(dest) + i) + 1) < size)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		i++;
//	}
//	*dest = '\0';
//	return ((ft_strlen(dest)) + (ft_strlen(src)));
//}
