#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include"libft/libft.h"
#include"libftest/libftest.h"

#define N 10

void fei(int n);

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

void fei(int n)
{
	//char s[len];
	int x = 0;
	int counter = 0;

	while (counter++ < n)
	{
		size_t len = rand_n(50, 2);	
		char ft_s[len];
		unsigned int c = rand_u8bit('p');
		size_t num = rand_n(len, 2) - 1;
		size_t i = rand_n(len - num, 0);
		
		random_str(ft_s, len);
		printf("%d Str: %s Len: %lu\n", x, ft_s, strlen(ft_s));
		ft_memset(ft_s + i, c, num * sizeof(char));
		printf("c: %c - num: %lu - i: %lu - s: %s\n", c, num, i, ft_s);
		x++;
	}
}
