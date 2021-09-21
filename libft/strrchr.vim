/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:37:54 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/20 15:07:53 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct strrchr
// retourne la str s a partir de la derniere occurence du char c
 
#include"libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i  = ft_strlen(s);
    if (c == '\0')
    {
        while (i > 0)
        {
            i--;
            s++;
        }
        return ((char *)s);
    }
    while (--i > 0)
        s++;
    while (*s)
    {
        if (*s == c)
			 return ((char *)s);
        s--;
    }
   return (NULL);
}
