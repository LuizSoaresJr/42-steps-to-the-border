#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}		
		else
		{
			ft_putchar('-');
			nb = -nb;
		}
	}
	if (nb <= 9)
	{
		ft_putchar('0' + nb);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

#include<limits.h>

int	main(void)
{
	write(1, "2147483647 ", 11);
	ft_putnbr(INT_MAX);
	write(1, "\n", 1);
	write(1, "42 ", 4);
	ft_putnbr(42);
	write(1, "\n", 1);
	write(1, "0 ", 3);
	ft_putnbr(0);
	write(1, "\n", 1);
	write(1, "-42 ", 5);
	ft_putnbr(-42);
	write(1, "\n", 1);
	write(1, "-2147483648 ", 12);
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	return(0);
}