#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include"libft/libft.h"
#include"libftest/libftest.h"

#define N 10

void fuu(void);

int main()
{
	srand((unsigned)time(0));
	test_ctype(N, ft_isalpha, isalpha, "isalpha");
	test_ctype(N, ft_isdigit, isdigit, "isdigit");
	test_ctype(N, ft_isalnum, isalnum, "isalnum");
	test_ctype(N, ft_isascii, isascii, "isascii");
	test_ctype(N, ft_isprint, isprint, "isprint");
	test_ctype(N, ft_toupper, toupper, "toupper");
	test_ctype(N, ft_tolower, tolower, "tolower");

	fuu();
	return (0);

	/*
	char *str = "This is a test phrase";
	printf("%s\n", ft_substr(str, 5, 2));
	*/
}

void printf_int_arr(int *arr, size_t n)
{
	while (n-- != 0)
		printf("%d\t", *arr++);
	putchar('\n');
}

void printf_float_arr(float *arr, size_t n)
{
	while (n-- != 0)
		printf("%f\t", *arr++);
	putchar('\n');
}

void printf_char_arr(char *arr, size_t n)
{
	while (n-- != 0)
		printf("%c\t", *arr++);
	putchar('\n');
}

void fuu(void)
{
	int n = 3;
	int v = 0;
	
	char arr_char[n];
	char arr_char_ft[n];
	
	int arr_char[n];
	int arr_char_ft[n];
	
	memset(arr_char, v, n * sizeof(arr_char));
	ft_memset(arr_char_ft, v, n * sizeof(arr_char_ft));

	printf_char_arr(arr_char, n);
	printf_char_arr(arr_char_ft, n);
}
