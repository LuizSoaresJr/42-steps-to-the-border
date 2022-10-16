#include<stdlib.h>
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	int	i;
		
	ss = malloc(len * sizeof(char));
	ss[len - 1] = '\0';
	i = 0;
	while (s[start] != '\0' && ss)
		ss[i++] = s[start++];
	return (ss);
}
