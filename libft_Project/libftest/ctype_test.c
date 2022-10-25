#include<stdio.h>
#include<ctype.h>

#include"libftest.h"

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

void test_ctype(int n, int(*p_ft)(int), int(*p_f)(int), char* f_name)
{
	int i = 0;

	printf("|=:=:=:=:=:(\033[0;36m%s\033[0m):=:=:=:=:=|\n", f_name);
	while(i < n)
	{	
		int c = rand_u8bit('s');
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

