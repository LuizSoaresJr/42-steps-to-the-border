#include<unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1 , &c, 1);
}

int	main(void)
{
	int i = 0;
	while (i < 256)
	{
		ft_putchar(i);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
