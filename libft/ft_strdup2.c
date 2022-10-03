#include "libft.h"

char	*ft_strdup2(const char *s1, int size)
{
	char	*final;

	final = malloc(size + 1);
	if (!final)
		return (NULL);
	ft_bzero(final, size + 1);
	return (ft_memcpy(final, s1, size));
}
