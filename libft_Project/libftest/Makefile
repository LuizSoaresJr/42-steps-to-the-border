CC	:= gcc
CFLAGS 	:= -Wall -Wextra -Werror -c
OBJ	:= $(patsubst %.c, %.o,$(wildcard *.c))

all: libftest.a clean

libftest.a: $(OBJ) | libftest.h 
	ar -crs libftest.a *.o
%.o: %.c
	$(CC) $(CFLAGS) $^

#Remove the object files after the creation of libft.a
clean: 
	rm -f *.o 
