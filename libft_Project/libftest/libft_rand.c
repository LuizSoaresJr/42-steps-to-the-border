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
size_t rand_n(size_t top, size_t bot)
{
	size_t n = random() % top;
	return ((n < bot) ? n + bot :  n);
}
