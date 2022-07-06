#include<stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int nbr = 24;
	ft_ft(&nbr);
	printf("%d\n", nbr);	
	return (0);
}	

