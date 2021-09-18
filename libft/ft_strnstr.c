/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:13:48 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/18 15:22:54 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit la fct strnstr
// trouve la 1ere occurence de la string neddle dans la string haystack 
// pour pas plus que long que len char
//
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (haystack[i] && --len > 0)
	{
		i = 0;
		if  (needle[i] == '\0')
			return 0;
		while (ft_strchr(&haystack[j], needle[i]))
		{
			i++;
			j++;
		}
		j = 0;
		if (ft_strlen(needle) == i)
		{
			printf("YOLO");
			return ((char *)&haystack[j]);
		}
		j++;
	}
	return (NULL);;
}
