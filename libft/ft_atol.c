/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:13:27 by jvigneau          #+#    #+#             */
/*   Updated: 2022/05/20 13:21:17 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	check_spaces(const char *str)
{
	int	p;

	p = 0;
	while (str[p] == 32 || (str[p] >= 9 && str[p] <= 13))
		p++;
	return (p);
}

long	ft_atol(char *nb)
{
	long	i;
	long	negative;
	long	final;

	i = 0;
	negative = 1;
	final = 0;
	i = check_spaces(nb);
	if ((nb[i] == '-') || (nb[i] == '+'))
	{
		if (nb[i++] == '-')
			negative = -1;
	}
	while (ft_isdigit(nb[i]))
		final = ((final * 10) + (nb[i++] - 48));
	return (final * negative);
}
