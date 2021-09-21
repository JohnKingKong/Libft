/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:28:20 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/18 15:28:42 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct memmove
// copie len bytes de la str src dans la str src

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}
