#include<unistd.h>

void ft_putchar(char c);
void ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(-10);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb *= -1;		
	}

	if(nb < 10)
	{
		ft_putchar(nb + '0');
	}
}
