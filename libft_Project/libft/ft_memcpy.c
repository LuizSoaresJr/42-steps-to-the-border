#include<stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ptr = dest;
	size_t i = 0;
	while (i < n)
		ptr[i++] = *(unsigned char*)src++;
	return (dest);

}
