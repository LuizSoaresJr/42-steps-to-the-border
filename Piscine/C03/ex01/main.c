#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char **argv)
{
	if (argc != 4)
		return 1;
	
	int len = atoi(*(argv + 3));
	int res1 = strncmp(*(argv + 1), *(argv +2), len);
	int res2 = ft_strncmp(*(argv + 1), *(argv +2), len);

	printf("strncmp = %d\n", res1);
	printf("ft_strncmp = %d\n", res2);

	return 0;
}
