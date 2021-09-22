/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:04:26 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/22 15:00:11 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui retourne une str de char representant lint en param
// negatif doivent etre pris en compte

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*final;
	int		i;

	i = 0;
	final = malloc(sizeof(size_t));
	if (n < 0)
	{
		n = n * -1;
		final[i] = '-';
		i++;
	}
	while (n >= 10)
	{
		final[i] = (n / 10) + 48;
		n = n % 10;
		i++;
	}
	if (n <= 9)
	{
		final[i] = n + 48;
		i++;
	}
	final[i] = '\0';
	return (final);
}
