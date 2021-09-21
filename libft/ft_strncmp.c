/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 12:11:03 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/20 14:46:03 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct strncmp

#include "libft.h" 

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((ft_strlen(s1) < n) || (ft_strlen(s2) < (n)))
		return (0);
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
