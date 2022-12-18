/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:04:06 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/18 14:52:50 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>

char	*ft_strchr(const char *s, int c)
{
	if (c > 256)
		c %= 256;
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}

/*
int	main(void)
{
	char *str = "teste";
	char *res;
	char *res_ft;
	res = strchr(str, 't' + 256);
	res_ft = ft_strchr(str, 't' + 256);
}
*/