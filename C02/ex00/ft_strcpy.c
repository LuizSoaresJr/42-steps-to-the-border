char	*ft_strcpy(char *dest, char *src)
{
	if (dest == NULL)
		return NULL;

	char	*ptr;
	ptr = dest;

	while(*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return ptr;
}
