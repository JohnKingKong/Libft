/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:51:48 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/16 15:22:53 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct memcpoy

#include <stddef.h>

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	if (!(src) || !(dst))
		return NULL;
    while ((n-- > 0))
    {
        ((char *)dst)[n] = ((char *)src)[n];   
    }
    return (dst);
}
