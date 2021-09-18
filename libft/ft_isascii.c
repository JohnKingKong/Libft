/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:43:49 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/18 12:24:09 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct isascii
// verifier si un char c est un caractere ascii valide

int	ft_isascii(int c)
{
	if (((unsigned char)c >= 0) && ((unsigned char)c <= 127))
		return (1);
	return (0);
}
