/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:47:59 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/18 12:03:36 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit la fct isalpha a lidentique
// return 1 si le char en param est un caractere alphabetique, 0 sinon

int	ft_isalpha(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (((a >= 65) && (a <= 90)) || ((a >= 97) && (a <= 122)))
		return (1);
	return (0);
}
