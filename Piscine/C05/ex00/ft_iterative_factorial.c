
//it is supposed to handle the over flow?

#include<stdio.h>
#include<stdlib.h>

int	ft_iterative_factorial(int nb);

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
}
	
int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
		fact *= nb--;
	return (fact);
}
