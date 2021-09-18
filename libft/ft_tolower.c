/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:43:19 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/18 13:47:05 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct tolower

int	ft_tolower(int c)
{
	if ((((unsigned char)c) >= 65) && (((unsigned char)c) <= 90))
		c += 32;
	return (c);
}
