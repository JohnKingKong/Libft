/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:51:15 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/21 17:36:01 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ecrire une fct qui reproduit la fct strdup a lidentique
//allocates assez de memoire pour une copie de la srt1, 
//la copiue et retourne un pointeur to it

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*final;

	final = malloc(strlen(s1));
	if (final == NULL)
		return (NULL);
	return (ft_memcpy(final, s1, (ft_strlen(s1))));
}
