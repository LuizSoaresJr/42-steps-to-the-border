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
#define WORD 45

char *random_sentence(size_t n, char* buffer);
void mesure(size_t n);

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
	
	char buffer[3 * WORD];
	random_sentence(3, buffer);
	char buffer_ft[strlen(buffer) + 1];

	printf("%s", buffer);
	memmove(buffer + 10, buffer + 5, 10);
	mesure(strlen(buffer) + 1);
	printf("%s", buffer);

	printf("%s", buffer_ft);
	ft_memmove(buffer_ft + 10, buffer_ft + 5, 10);
	mesure(strlen(buffer_ft) + 1);
	printf("%s", buffer_ft);


	

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
//fill a buffer with a string with n words long ending with a . and \n
char *random_sentence(size_t n, char* buffer)
{
	char *ptr_buffer = buffer;
	while (--n)
	{
		ptr_buffer = random_dic_word(ptr_buffer);
		*ptr_buffer++ = ' ';
	}
	*--ptr_buffer = '.';
	*++ptr_buffer = '\n';
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
