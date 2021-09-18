/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:52:50 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/18 12:05:28 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct isprint
// return 1 si le char en param est un printable char, 0 sinon

int	ft_isprint(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if ((a >= 32) && (a <= 126))
		return (1);
	return (0);
}
