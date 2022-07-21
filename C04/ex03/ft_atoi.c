#include<stdio.h>
#include<stdlib.h>

int	ft_atoi(char *str);

int main(int argc, char **argv)
{
	if (argc != 2)
		return(1);
	printf("atoi out: %d\n", atoi(argv[1]));
	printf("ft_atoi out: %d\n",ft_atoi(argv[1]));
}

//do not cast the left zeros: 0123 = 123
//if has no int castable it returns 0
//if the numbers is at rigth of letters returns 0

int	ft_atoi(char *str)
{
	int i;
	int foo;

	i = 0;
	foo = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			foo = (str[i] - '0') * 10;
		i++;
	}
	return (foo);
}

