/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 21:52:52 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/18 13:46:47 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct strlcpy

#include "libft.h" 

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && ((ft_strlen(dest) + i) + 1) < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return ((ft_strlen(dest)) + (ft_strlen(src)));
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
