/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:29:41 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/21 17:39:26 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui retourne une str qui start a start et max taille = len

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*final;

	final = malloc(len);
	if (final == NULL)
		return (NULL);
	return (ft_memcpy(final, &s[start - 1], len));
}
