#include<stdlib.h>
#include<ctype.h>

/*generate a random int number between 0 and 255 
's' - standandard procedure 
'p' - exclude non printible characters*/

unsigned long rand_u8bit(char mode)
{
	if (mode == 's')
		return (random() % 255);
	else if (mode == 'p')
	{
		unsigned int c;
		do
		{
			c = random() % 255;
		}
		while (!isprint(c));
		return (c);
	}
	else
		return 0;
}

// Receives top as the max value to generate random numbers 
unsigned long rand_n(unsigned int top, unsigned short int bot)
{
	unsigned long n = random() % top;
	do
	{
		n = random() % top; 
	}
	while (n < bot);
	return (n);
}
