/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:57:46 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/18 15:23:48 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
    int a = 'a';
    int d = 'A';
    int b = '4';
    size_t antho = 4;
    int c = '\t';
    char s[] = "IaAAAAa";
    char x[] = "IaaAAAA";
    char q[] = "YOLO";
    char p[] = "oh nxiaoi122173ixopplo981xil12o937!!!";
	char polo[] = "polo";
	char bg[] = "jdshjkfsdpolflskjfslpolodkshj";
  
    printf("ft_isalpha : %d \n", ft_isalpha(a));
    printf("isalpha : %d \n", isalpha(a));
    printf("ft_isdigit : %d \n", ft_isdigit(b));
    printf("isdigit : %d \n", isdigit(b));
    printf("ft_isalnum : %d \n", ft_isalnum(c));
    printf("isalnum : %d \n", isalnum(c));
    printf("ft_isascii : %d \n", ft_isascii(c));
    printf("isascii : %d \n", isascii(c));
    printf("ft_isprint : %d \n", ft_isprint(a));
    printf("isprint : %d \n", isprint(a));
    printf("ft_strlen : %lu \n", ft_strlen(s));
    printf("strlen : %lu \n", strlen(s));
  //  printf("memset : %s \n", memset(s, a, antho));
    printf("ft_memset : %s \n" , ft_memset(s, a, antho));
    printf("ft_bzero : %s \n", x);
//    ft_bzero(x, antho);
 //   printf("after : %s \n", x);
 //   printf("bzero : %s \n", s);
  //  bzero(s, antho);
//    printf("after : %s \n", s);
    //printf("ft_memcpy : %s \n", ft_memcpy(q, p, 4));
    //printf("memcpy : %s \n", memcpy (q, p , 4));
    //printf("ft_memmove : %s \n", ft_memmove(q, p, 4));
  	//printf("memmove : %s \n", memmove(q, p, 4));
 	printf("ft_toupper : %d \n", ft_toupper(a));
  	printf("toupper : %d \n", toupper(a));
	printf("ft_tolower : %d \n", ft_tolower(d));
    printf("tolower : %d \n", tolower(d));
 //   printf("ft_strlcat : %lu \n", ft_strlcat(q, p, 5));
    printf("%s \n", q);
	//printf("strlcat : %lu \n", strlcat(q, p, 5));
    printf("%s \n", q);
	printf("before : %s \n", q);
//	printf("strlcpy : %lu, \n", strlcpy(q, p, 5));
	printf("ft_strlcpy : %lu, \n", ft_strlcpy(q, p, 5));
	printf("after : %s \n", q);
	printf("strchr : %s \n", strchr(p, '\0'));
	printf("ft_strchr : %s \n", ft_strchr(p, '\0'));
	printf("after : %s \n", p);
	printf("strrchr : %s \n", strrchr(p, '\0'));
	printf("ft_strrchr : %s \n", ft_strrchr(p, '\0'));
	printf("strncmp : %d \n", strncmp(s, x, 6));
	printf("ft_strncmp : %d \n", ft_strncmp(s, x, 6));
	printf("memchr : %p \n", memchr(s, 'A' , 4));
	printf("ft_memchr : %p \n", ft_memchr(s, 'A' , 4));
	printf("memcmp : %d \n", memcmp(s, x , 7));
	printf("ft_memcmp : %d \n", ft_memcmp(s, x , 7));
	printf("strnstr : %s \n", strnstr(bg, polo, 64));
	printf("ft_strnstr : %s \n", ft_strnstr(bg, polo, 64));
}
