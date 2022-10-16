#include<stdio.h>

int ft_strlen(char *str)
{
	char *ptr = str;
	
	int i = 0;
	while(*ptr)
		i++;
	return (i);
}

char *ft_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while(*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	
	return ptr;

}

char	*ft_strcat(char *dest, char *src)
{
	char *ptr = dest;
	dest += ft_strlen(dest);
	dest = ft_strcpy(dest, src);
	return ptr;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_strlen(argv[1]));
}
