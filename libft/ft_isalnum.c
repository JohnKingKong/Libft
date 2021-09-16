/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:47:04 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/16 09:44:21 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidenteique la fct isalnum

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);

int ft_isalnum(int c)
{
    if ((ft_isalpha(c)) || (ft_isdigit(c)))
        return (1);
    return (0);
}
