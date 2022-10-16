#include<stdlib.h>
#include<string.h>

char	*ft_strdup(char *src)
{
	char *ptr = (char*) malloc(strlen(src)*sizeof(char));
	return (strcpy(ptr, src));
}
