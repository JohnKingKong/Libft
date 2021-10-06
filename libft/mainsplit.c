
#include "libft.h"

int main ()
{
	char *s = 0;
	char c = 0;

	char **final = ft_split(s, c);
	if (*final == NULL)
		printf ("YOLO");
	return 0;
}
