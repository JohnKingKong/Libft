/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:56:20 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/22 11:19:46 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct atoi
// change un char ascii en integer

#include "libft.h"

int	ft_atoi(const char	*str)
{
	int	negative;
	int	final;
	int	i;

	negative = 1;
	final = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			negative = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		final = ((final * 10) + (str[i] - 48));
		i++;
	}
	return (final * negative);
}
