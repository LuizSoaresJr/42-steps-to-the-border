

char	*ft_strncpy(char *dest, char *src, unsigned int n);
{
	if (dest == NULL)
		return NULL;

	char	*ptr;
	ptr = dest;

	while(src != src[n])
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return ptr;
}
