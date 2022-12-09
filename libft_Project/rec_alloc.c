#include"libft.h"

char	*rec_str_alloc(size_t n)
{
	char	*ptr;
	char	*tmp;

	if (n == 1)
	{
		ptr = malloc(n * sizeof(char));
		*ptr = '\0';
		return (ptr);
	}
	tmp = rec_str_alloc(n - 1);
	ptr = malloc(n * sizeof(char));
	*(ptr + (n - 1)) = *(tmp + (n - 2));
	free(tmp);
	return (ptr);
}

int main (void)
{ 
	char	*result = rec_str_alloc(2);
	*result = 'x';
	printf("%p - %s\n", result, result);
}
