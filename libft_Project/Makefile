CC	:= gcc
FLAGS 	:= -Wall -Wextra -Werror

.PHONY: libft libftest all

all: libft libftest main

libft:
	cd libft && $(MAKE)
libftest:
	cd libftest && $(MAKE)

vpath %.h libft libftest
vpath %.a libft libftest

main: main.c libft.a libftest.a | libft.h libftest.h
	$(CC) -g $(FLAGS) $^ -o $@
