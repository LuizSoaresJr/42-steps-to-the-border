#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	int u;
	int t;
	int h;

	h = 0;
	while (h <= 7)
	{
		t = 1 + h;
		while (t <= 8)
		{
			u = 1 + t;
			while (u <= 9)
			{
				ft_putchar(h + '0');
				ft_putchar(t + '0');
				ft_putchar(u + '0');
				if (!(h == 7 && t == 8 && u == 9))
					write(1, ", ", 3);
				u++;
			}
			t++;
		}
		h++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}