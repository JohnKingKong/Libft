/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:08:15 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/17 13:31:21 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct isdigit

int ft_isdigit(int c);

int ft_isdigit(int c)
{
    if (((unsigned char)c >= 48) && ((unsigned char)c <= 57 ))
        return (1);
    return (0);
}
