

void	*memcpy(void *dest, const void *src, size_t n)
{
	char *ptr = dest;
	while (n--)
		*(char*)ptr++ = *(const char*)src++
	return (dest);

}
