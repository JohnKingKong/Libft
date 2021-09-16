/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:24:01 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/16 16:02:14 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct memset

#include <stdio.h>

void *ft_memset(void *b, int c, size_t len);

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *a;

    i = -1;
    a = (unsigned char *)b;
    while (++i < len)
    {
        a[i] = (unsigned char)c;
    }
    return (b = a);
}

