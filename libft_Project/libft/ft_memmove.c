#include<stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	unsigned char tmp[n];
	unsigned char *ptr = dest;
	while(i < n)
		tmp[i++] = *(unsigned char*)src++;
	while(i--)
		ptr[i] = tmp[i];
	return (dest);
}
