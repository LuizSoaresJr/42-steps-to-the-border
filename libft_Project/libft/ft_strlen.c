#include<stdlib.h>

size_t ft_strlen(const char *s)
{
	size_t i = 1;
	while (*s++)
		i++;
	return (i);
}
