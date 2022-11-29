/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:22:12 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/29 13:20:39 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;

	if (len == 1 || start > ft_strlen(s))
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, 1);
	}
	else
	{
		ptr = malloc(len + 1);
		if (!ptr)
			return (NULL);
		ft_strlcpy(ptr, s + start, len + 1);
	}
	return (ptr);
}
/*
int main (void)
{
	char *s = "Eu sou inteligente.";
	char *resut = ft_substr("", 0, 0);
	printf("%s\n", resut);
}
*/

//len = 1 return "";
//		malloc(1);
// start > sizeof(len) return "";
//		malloc(1);
