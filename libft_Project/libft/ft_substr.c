/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:22:12 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/19 18:51:09 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*ptr;
	int	possible;

	s_len = ft_strlen(s);
	possible = 1;
	if (len == 0 || start >= s_len || *s == '\0')
	{
		len = 1;
		possible = 0;
	}	
	else if (len >= s_len)
		len = ((s_len - start) + 1);
	else if ((start + len) <= s_len)
		len++;
	ptr = ft_calloc(sizeof(char), len);
	if (!ptr)
		return (NULL);
	if (possible)
		ft_strlcpy(ptr, s + start, len);
	return (ptr);
}
/*
int main(void)
{
	char * res = ft_substr("hola", 2, 3);
	printf("%s\n", res);
}
*/
