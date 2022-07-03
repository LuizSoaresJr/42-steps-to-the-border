#include<unistd.h>

void ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(4);
}

void ft_putnbr(int nb)
{
	write(1, &nb, 4);
}
