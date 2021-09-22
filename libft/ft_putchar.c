/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:19:56 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/22 11:21:56 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui retourne ds la sortie standard un char passe en param

#include "libft.h"

void	ft_putchar(char a)
{
	write(1, &a, sizeof(a));
}
