#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a = 9;
	int b = 2;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);

	printf("%d\t%d\n", div, mod);
	
	return (0);
}

