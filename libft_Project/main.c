#include<stdarg.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include"libft/libft.h"
#include"libftest/libftest.h"

#define N 10

//void fei(int n, ...);
void test_strlen(void);
void rand_n_test(size_t bot);
void memmove_tester(void);

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

	//rand_n_test(3);
	//test_strlen();
	//fei(N, ft_memset);
	memmove_tester();
		
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

/*void fei(int n, ...)
{
	va_list args;
	int i = 0;

	va_start(args, n);

	while (i < n)
	{
		size_t len = rand_n(50, 3);

		char ft_s[len];
		char s[len];

		random_str(ft_s, len);
		strncpy(s, ft_s, len);
		if (va_arg(args, void *(*()p_ft)(void*)(int)(size_t)))
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
}*/


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
	unsigned short top = 40;
	while (i < top)
	{
		printf("%2lu, ",  rand_n(top, bot));
		i++;
	}
	putchar('\n');
}

void print_i_hex(size_t len)
{
	size_t i = 0;
	while (len-- != 0)
		printf("%.2lx,", i++);
	printf("\b\n");
}

void print_str_1bit_spaces(char *str)
{
	char *ptr = str;
	while(*ptr++)
		printf(" %c ", *ptr);
	putchar('\n');
}

void memmove_tester(void)
{
	int n = 10;
	while(n-- != 0)
	{
		size_t len = rand_n(20, 3);
		char str[len];
		random_str(str, len);
		size_t i_src = rand_n(len, 1);
		size_t i_dest = rand_n(len, 1);
		size_t n_bytes = rand_n(len, 1); 
		
		printf("len: %lu - i_src: %.2lx - i_dest: %.2lx - n_bytes: %lu\n", len, i_src, i_dest, n_bytes);
		print_str_1bit_spaces(str);
		print_i_hex(len - 1);
		memmove(i_dest + str, i_src + str, n_bytes);
		print_str_1bit_spaces(str);
		putchar('\n');
	}
}

