#ifndef LIBFTEST_H
#define LIBFTEST_H

#include<stdlib.h>
#include<ctype.h>

unsigned long rand_u8bit(char mode); //modes: 's', 'p' 
unsigned long rand_n(unsigned int top, unsigned short int bot); //modes 0 or 1
void test_ctype(int n, int(*p_ft)(int), int(*p_f)(int), char* f_name);

#endif
