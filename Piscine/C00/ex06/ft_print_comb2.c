#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_put_base_10(int n)
{
    ft_putchar(n / 10 + '0');
    ft_putchar(n % 10 + '0');
}

void    ft_print_comb2(void)
{
    int f;
    int s;

    f = 0;
    while (f <= 98)
    {
        s = f + 1;
        while (s <= 99)
        {
            ft_put_base_10(f);
            ft_putchar(' ');
            ft_put_base_10(s);
            if (!(f == 98 && s == 99))
                write(1, ", ", 3);
            s++;
        }
        f++;
    }
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}