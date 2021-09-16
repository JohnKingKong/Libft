/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:02:45 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/16 10:49:30 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique strlen

#include <stddef.h>

size_t    ft_strlen(const char *s);

size_t    ft_strlen(const char *s)
{
    size_t    i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
