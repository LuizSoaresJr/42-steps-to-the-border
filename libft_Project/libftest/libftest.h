#ifndef LIBFTEST_H
#define LIBFTEST_H

#include<stdlib.h>
#include<ctype.h>

unsigned long rand_u8bit(char mode); //modes: 's', 'p' 
size_t rand_n(size_t top, size_t bot);

void test_ctype(int n, int(*p_ft)(int), int(*p_f)(int), char* f_name);

#endif
