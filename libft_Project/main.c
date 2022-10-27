#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include"libft/libft.h"
#include"libftest/libftest.h"

#define N 10

void fei(int n);
void test_strlen(void);
void rand_n_test(size_t bot);

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

	//rand_n_test(2);
	//test_strlen();
	fei(N);
	return (0);

	/*
	char *str = "This is a test phrase";
	printf("%s\n", ft_substr(str, 5, 2));
	*/
}

//uses libftest and ctype : random string with printible charcters
void random_str(char *s, size_t n)
{
		size_t i = 0;
		while (i < (n - 1))
			s[i++] = rand_u8bit('p');
		s[i] = '\0';
}

void fei(int n, ...)
{
	int i = 0;

	while (i < n)
	{
		size_t len = rand_n(50, 3);

		char ft_s[len];
		char s[len];

		random_str(ft_s, len);
		strncpy(s, ft_s, len);

		unsigned int c = rand_u8bit('p');
		size_t n_bytes = rand_n(len, 2) - 1;
		size_t index_starter = rand_n(len - n_bytes, 0);
		
		printf("%d Str: %s Len: %lu\n", i, ft_s, strlen(ft_s));
		printf("%d Str: %s Len: %lu\n", i, s, strlen(ft_s));
		ft_memset(ft_s + index_starter, c, n_bytes * sizeof(char));
		memset(s + index_starter, c, n_bytes * sizeof(char));
		printf("c: %c - n_bytes: %lu - index_starter: %lu - s: %s\n", c, n_bytes, index_starter, ft_s);
		printf("c: %c - n_bytes: %lu - index_starter: %lu - s: %s\n", c, n_bytes, index_starter, s);
		i++;
	}
}

void test_strlen(void)
{
	size_t i = 0;
	size_t j = 0;
	while (i < 20)
	{
		short len = (short)rand_n(30, 2);
		char str[len];
		random_str(str, len);
		if ((len =! (short)(ft_strlen(str) + 1)))
		{
			printf("%d %s %ld KO!\n", len, str, ft_strlen(str));
			j++;
		}
		i++;
	}
	if (!j)
		printf("ft_strlen OK\n");
}

void rand_n_test(size_t bot)
{
	unsigned short i = 0;
	unsigned short top = 50;
	while (i < top)
	{
		printf("%2lu, ",  rand_n(top, bot));
		i++;
	}
	putchar('\n');
}
