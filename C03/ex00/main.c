#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2);

int main(int argc, char **argv)
{
	if (argc != 3)
		return 1;
	
	int res = strcmp((*(argv + 1)), (*(argv + 2)));
	int res1 = ft_strcmp((*(argv + 1)), (*(argv + 2)));

	printf("strcmp = %d\n", res);
	printf("ft_strcmp = %d\n", res1);
	return 0;
}
