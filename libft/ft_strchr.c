/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 01:22:02 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/17 02:10:03 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 // ecrire une fct qui reproduit a lidentique la fct strchr
 
#include <stdlib.h>

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;
	char	*a;

	i = 0;
	j = 0;
	a = malloc(sizeof(s));
	while (s[i])
	{
		if (s[i] == ((char)c))
		{
			while (s[i])
			{
				a[j] = s[i];
				j++;
				i++;
			}
			a[j] = '\0';
			return(a);
		}
		else
			i++;
	}
	free(a);
	return (0);
}
