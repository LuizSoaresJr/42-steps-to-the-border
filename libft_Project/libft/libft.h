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

void	*ft_memset(void *s, int c, size_t n);
void 	ft_bzero(void *s, size_t n); //not tested
void	*ft_memcpy(void *dest, const void *src, size_t n); //not tested
void 	*ft_memmove(void *dest, const void *src, size_t n); //not tested

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif
