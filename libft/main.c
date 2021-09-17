/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:57:46 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/17 18:43:53 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

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
   // printf("ft_strlcat : %lu \n", ft_strlcat(q, p, 5));
    printf("%s \n", q);
   // printf("strlcat : %lu \n", strlcat(q, p, 5));
    printf("%s \n", q);
	printf("before : %s \n", q);
//	printf("strlcpy : %lu, \n", strlcpy(q, p, 5));
//	printf("ft_strlcpy : %lu, \n", ft_strlcpy(q, p, 5));
	printf("after : %s \n", q);
	printf("strchr : %s \n", strchr(p, '7'));
	printf("ft_strchr : %s \n", ft_strchr(p, '7'));
	printf("after : %s \n", p);
	printf("strrchr : %s \n", strrchr(p, 'o'));
	printf("ft_strrchr : %s \n", ft_strrchr(p, 'o'));
	printf("strncmp : %d \n", strncmp(s, x, 6));
	printf("ft_strncmp : %d \n", ft_strncmp(s, x, 6));
	printf("memchr : %p \n", memchr(s, 'A' , 4));
	printf("ft_memchr : %p \n", ft_memchr(s, 'A' , 4));
	printf("memcmp : %d \n", memcmp(s, x , 7));
	printf("ft_memcmp : %d \n", ft_memcmp(s, x , 7));
	printf("strnstr : %s \n", strnstr(bg, polo, 64));
}
