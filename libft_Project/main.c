#include<stdarg.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<err.h>
#include"libft/libft.h"
#include"libftest/libftest.h"

#define N 10

void fei(void);

int main()
{
	srandom((unsigned)time(0));
	test_ctype(N, ft_isalpha, isalpha, "isalpha");
	test_ctype(N, ft_isdigit, isdigit, "isdigit");
	test_ctype(N, ft_isalnum, isalnum, "isalnum");
	test_ctype(N, ft_isascii, isascii, "isascii");
	test_ctype(N, ft_isprint, isprint, "isprint");
	test_ctype(N, ft_toupper, toupper, "toupper");
	test_ctype(N, ft_tolower, tolower, "tolower");

//	memmove_tester();
	fei();		
	return (0);

}

//uses libftest and ctype : random string with printible charcters
void random_str(char *s, size_t n)
{
		size_t i = 0;
		while (i < (n - 1))
			s[i++] = rand_u8bit('p');
		s[i] = '\0';
}

char *fuu(char *buffer)
{
	//Open dictionary of words
	char *path = "/usr/share/dict/words";
	FILE *word_stream = fopen(path, "r");
	if (!word_stream)
		err(1, "%s", path);
	else
	{
		//Get word from dictionary
		char c;
		size_t i_nl = 0;
		size_t rand_w = rand() % 102401;
		char *ptr_w = buffer;
		while (fread(&c, sizeof(char), 1, word_stream) && i_nl <= rand_w)
		{
			if (c == '\n')
			{
				if (i_nl == rand_w)
					*ptr_w = '\0';
				i_nl++;
			}
			else if (i_nl == rand_w)
				*ptr_w++ = c;
		}
		return (buffer);
	}
}

void fei(void)
{
	int i = 0;
	char word_buffer[45];
	while (i <= 5)
	{
		printf("%s ", fuu(word_buffer));
		i++;
	}
	putchar('\n');
}
