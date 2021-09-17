/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 12:11:03 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/17 16:21:02 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct strncmp

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_strlen(const char *s);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((ft_strlen(s1) < (int)n) || (ft_strlen(s2) < (int)n))
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

