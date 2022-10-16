#ifndef LIBFT_H
#define LIBFT_H

#include<stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int 	ft_tolower(int c);

char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif
