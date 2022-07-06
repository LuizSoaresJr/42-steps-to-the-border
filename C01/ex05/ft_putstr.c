#include<unistd.h>

void	ft_putchar(char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

