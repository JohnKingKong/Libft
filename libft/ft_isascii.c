/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:43:49 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/17 00:36:41 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct isascii

int ft_isascii(int c);

int ft_isascii(int c)
{
    if (((unsigned char)c >= 0) && ((unsigned char)c <= 127))
        return (1);
    return 0;
}

