/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:47:59 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/16 14:12:05 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit la fct isalpha a lidentique

int	ft_isalpha(int c);

int	ft_isalpha(int c)
{
	if (((unsigned char)c >= 65 && (unsigned char)c <= 90 )
		|| ((unsigned char)c >= 97 && (unsigned char)c <= 122))
		return (1);
	return (0);
}
