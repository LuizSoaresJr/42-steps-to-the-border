CC	:= gcc
CFLAGS 	:= -Wall -Wextra -Werror -c
OBJ	:= $(patsubst %.c, %.o,$(wildcard *.c))

all: libft.a

libft.a: $(OBJ) | libft.h 
	ar -crs libft.a *.o
%.o: %.c
	$(CC) $(CFLAGS) $^

#Remove the object files after the creation of libft.a

.PHONY : clean

clean: 
	rm -f *.o 
