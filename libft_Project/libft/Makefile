NAME = libft.a
AR = ar -crs
CC	= gcc
CFLAGS = -Wall -Wextra -Werror
INC = libft
#SRC = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero \
ft_memcpy ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strnchr ft_strncmp ft_substr
SRC = ft_isalpha ft_isdigit ft_isalnum ft_isascii \
	  ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy \
	  ft_strlcpy ft_strlcat ft_toupper ft_tolower \
	  ft_strchr ft_strrchr ft_strncmp ft_strnstr \
	  ft_substr ft_memchr ft_memcmp ft_atoi ft_calloc \
	  ft_strdup ft_strjoin ft_strtrim ft_split ft_strmapi \
	  ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd \
	  ft_itoa ft_putnbr_fd ft_memmove 

OBJ	= $(SRC:=.o)
SRC_BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast \
	  ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap
OBJ_BONUS = $(SRC_BONUS:=.o)

all: $(NAME)

$(NAME): $(OBJ) | $(INC:=.h) 
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ_BONUS) | $(INC:=.h)
	$(AR) $(NAME) $(OBJ_BONUS)

.PHONY : all clean fclean re bonus
