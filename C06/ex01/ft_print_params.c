#include<unistd.h>

void	ft_putchar(char c);
void	ft_print_str(char *str);

int	main(int argc, char **argv)
{
	int	i;
	i = 1;

	while(i < argc)
	{
		ft_print_str(*(++argv));
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_str(char *str)
{
	char	*ptr;
	ptr = str;
	while(*ptr != '\0')
	{
		ft_putchar(*ptr);
		ptr++;
	}
}

