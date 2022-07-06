#include<stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int a = 2;
	int b = 4;

	ft_swap(&a, &b);

	printf("%d%d\n", a, b);

	return (0); 

}
