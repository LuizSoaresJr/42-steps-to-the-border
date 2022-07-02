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
	char l;

	i = '0';
	while(i <= '9')
	{
		j = '0';
		while(j <= '9')
		{
			k = '0';
			while(k <= '9')
			{
				l = '0';
				while(l <= '9')
				{
					write(1, &i, 1);
					write(1, &j, 1);
					write(1, " ", 1);
					write(1, &k, 1);
					write(1, &l, 1);
					write(1, ",", 1);
					l++;
				}
			k++;
			}
		j++;
		}
	i++;	
	}
}
