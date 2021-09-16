/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:52:50 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/16 10:00:09 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct isprint

int ft_isprint(int c);

int ft_isprint(int c)
{
    if ((c >= 32) && (c <= 126))
        return (1);
    return (0);
}

