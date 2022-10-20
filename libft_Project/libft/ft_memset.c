#include"libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	void *ptr = s;
	while (n-- != 0)
		*(unsigned char*)ptr++ = c;
	return (s);
}
