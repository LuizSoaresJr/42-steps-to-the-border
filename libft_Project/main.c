#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include"libft/libft.h"
#include"libftest/libftest.h"

#define N 10

static void test_ctype(int n, int(*p_ft)(int), int(*p_f)(int), char* f_name);

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
	return (0);

	/*
	char *str = "This is a test phrase";
	printf("%s\n", ft_substr(str, 5, 2));
	*/
}

static void  print_ok_ctype(int c, const char* f_name, int ft, int f)
{
	if(isgraph(c))
		printf("Int: %3d Hex: %3x Char: '%c' \033[0;32mOK\033[0m!", c, c, c);
	else
		printf("Int: %3d Hex: %3x Char:  NP \033[0;32mOK\033[0m!", c, c);
	printf("\tft_%s: %3d %s: %3d\n", f_name, ft, f_name, f);
}

static void print_ko_ctype(int c, const char* f_name, int ft, int f)
{
	if(isgraph(c))
		printf("Int: %3d Hex: %3x Char: '%c' \033[0;31mKO\033[0m!", c, c, c);
	else	
		printf("Int: %3d Hex: %3x Char:  NP \033[0;31mKO\033[0m!", c, c);
	printf("\tft_%s: %3d %s: %3d\n", f_name, ft, f_name, f);
}

static void test_ctype(int n, int(*p_ft)(int), int(*p_f)(int), char* f_name)
{
	int i = 0;

	printf("|=:=:=:=:=:(\033[0;36m%s\033[0m):=:=:=:=:=|\n", f_name);
	while(i < n)
	{	
		int c = rand_8bit();
		int foo = p_ft(c);
		int fei = p_f(c);
		if(foo == fei)
			print_ok_ctype(c, f_name, foo, fei);
		else
			print_ko_ctype(c, f_name, foo, fei);
		i++;
	}
	printf("\n");
}
