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
	char k;
	i = '0';

	while(i <= '7')
	{
		j = '1';
		while(j <= '8')
		{
			k = '2';
			while(k <= '9')
			{
			write(1, &i, 1);
			write(1, &j, 1);
			write(1, &k, 1);
			write(1, ",", 1);
			k++;
			}
		j++;
		}
	i++;	
	}
}
