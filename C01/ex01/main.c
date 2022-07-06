#include<stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int nbr = 24;
	int *p1nbr = &nbr;
	int **p2nbr = &p1nbr;
	int ***p3nbr = &p2nbr;
	int ****p4nbr = &p3nbr;
	int *****p5nbr = &p4nbr;
	int ******p6nbr	= &p5nbr;
	int *******p7nbr = &p6nbr;
	int ********p8nbr = &p7nbr;
	int *********p9nbr = &p8nbr;

	ft_ultimate_ft(p9nbr);

	printf("%d\n", nbr);	
	return (0);
}	

