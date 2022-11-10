#include<stdarg.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<err.h>
#include"libft/libft.h"
#include"libftest/libftest.h"

#define N_TEST 10
#define N 3
#define WORD 45

char *random_sentence(size_t n, char* buffer);
void mesure(size_t n);

int main()
{
	srandom((unsigned)time(0));
	test_ctype(N_TEST, ft_isalpha, isalpha, "isalpha");
	test_ctype(N_TEST, ft_isdigit, isdigit, "isdigit");
	test_ctype(N_TEST, ft_isalnum, isalnum, "isalnum");
	test_ctype(N_TEST, ft_isascii, isascii, "isascii");
	test_ctype(N_TEST, ft_isprint, isprint, "isprint");
	test_ctype(N_TEST, ft_toupper, toupper, "toupper");
	test_ctype(N_TEST, ft_tolower, tolower, "tolower");
	
	//Definig the buffer the size and initializing it
	size_t size = N * WORD;
	char buffer[size];
	bzero(buffer, size);

	size_t i = 0;

	while (i < N_TEST)
	{
		size_t dest = rand_n(size, 1);
		size_t src = rand_n(size, 1);
		size_t n_len = rand_n(size, 1);

		//Filling the buffer with a random string of words
		random_sentence(N, buffer);

		//Defining the test buffer and copying the buffer to it
		char buffer_ft[size];
		memcpy(buffer_ft, buffer, size);
		
		//Printing the buffer before and after memmove
		printf("Buffer:     %s\n", buffer);
		memmove(buffer + dest, buffer + src, n_len);
		printf("Memmove:    %s\n", buffer);

		//Printing the buffer before and after ft_memmove
		printf("Buffer:     %s\n", buffer_ft);
		ft_memmove(buffer_ft + dest, buffer_ft + src, n_len);
		printf("Ft_memmove: %s\n", buffer_ft);

		putchar('\n');

		i++;
	}

	

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

//return an pointer to the end of a random word at \0 from the dictionary
char *random_dic_word(char *buffer)
{
	//Open dictionary
	char *path = "/usr/share/dict/words";
	FILE *word_stream = fopen(path, "r");
	if (!word_stream)
		err(1, "%s", path);
	else
	{
		//Get a random word from dictionary
		char c;
		size_t i_nl = 0;
		size_t rand_w = rand() % 102401;
		while (fread(&c, sizeof(char), 1, word_stream) && i_nl <= rand_w)
		{
			if (c == '\n')
			{
				if (i_nl == rand_w)
				{
					*buffer = '\0';
					break;
				}
				i_nl++;
			}
			else if (i_nl == rand_w)
				*buffer++ = c;
		}
		return (buffer);
	}
}
//fill a buffer with a string with n words long ending with a '.'
char *random_sentence(size_t n, char* buffer)
{
	char *ptr_buffer = buffer;
	while (--n)
	{
		ptr_buffer = random_dic_word(ptr_buffer);
		*ptr_buffer++ = ' ';
	}
	*--ptr_buffer = '.';
	*++ptr_buffer = '\0';
	return (buffer);
}

void mesure(size_t n)
{
	size_t i = 0;
	while(i < n)
		printf("%ld", (i++) % 10);
	putchar('\n');
}
