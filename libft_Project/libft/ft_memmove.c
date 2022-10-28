#include<stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	char* tmp[n];
	char* ptr = src;
	while(i < n)
	{
		tmp[i++] = (char)src[i];
		*(char *)dest++ = *tmp++;
	}
}
