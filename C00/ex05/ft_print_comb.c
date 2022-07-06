#include<unistd.h>

void ft_print_comb(void)
{
	char i;
	char j;
	char k;
	
	k = '0';
	while(k <= '7')
	{
		j = '1' + (k - '0');
		while(j <= '8')
		{
			i = '2' + (j - '1');
			while(i <= '9')
			{
				write(1, &k, 1);
				write(1, &j, 1);
				write(1, &i, 1);
				if(k != '7')
				{
					write(1, ",", 1);	
				}
				else
				{
					write(1, "\n", 1);		
				}
				i++;
			}
			j++;
		}
		k++;
	}
}
