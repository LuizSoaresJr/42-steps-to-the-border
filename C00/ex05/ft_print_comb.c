#include<unistd.h>

void ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
}

void ft_print_comb(void)
{
	char i;
	char j;
	j = '1';

	while(j <= '8')
	{
		i = '2';
		while(i <= '9')
		{
			write(1, &j, 1);
			write(1, &i, 1);
			write(1, ",", 1);
			i++;
		}
		
		j++;
	}
}
