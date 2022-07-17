#include<stdio.h>

char *ft_strdup(char *src);

int	main(void)
{
	char *str1 = "";
	char *ptr1 = ft_strdup(str1);

	printf("%s\t%p\n", str1, str1); 
	printf("%s\t%p\n", ptr1, ptr1); 
}
