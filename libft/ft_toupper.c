/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:32:27 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/18 13:47:14 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct toupper 

int	ft_toupper(int c)
{
	if ((((unsigned char)c) >= 97) && ((unsigned char)c) <= 122)
		c -= 32;
	return (c);
}
