#ifndef LIBFTEST_H
#define LIBFTEST_H

#include<stdlib.h>

unsigned int rand_8bit(void);
void test_ctype(int n, int(*p_ft)(int), int(*p_f)(int), char* f_name);

#endif

