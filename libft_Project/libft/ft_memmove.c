#include<stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i = n;
	unsigned char *tmp = malloc(n * sizeof(unsigned char));
	unsigned char *ptr = dest + n;
	while (--i)
		*tmp++ = *(unsigned char*)src++;
	while (i++ < n)
		*ptr-- = *tmp--;
	free(tmp);
	return(dest);	
}
