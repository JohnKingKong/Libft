/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:54:51 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/06 18:09:52 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui libere la memoire de lelement en param et tous les 
// elements qui suivent, avec del et free, et le ptr initiakl point a NULL

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	last = *lst;
	if (lst)
	{
		while (last->next)
			del((t_list *)lst);
	}
	last = NULL;
}
