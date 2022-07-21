#include<stdlib.h>
#include<stdio.h>

int ft_iteractive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power-- > 1)
		res *= nb;
	return (res);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	
	int	i;
	int	j;
	int	roof;

	i = 0;
	roof = atoi(argv[1]);
	while(i++ < roof)
	{
		j = 0;
		while(j++ < roof)
		{
			printf("%d^%d = %d\t ", i, j, ft_iteractive_power(i, j));
		}
		putchar('\n');
	}
}
