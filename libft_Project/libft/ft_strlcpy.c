/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:52:48 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/21 16:25:19 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*ptr;

	ptr = dst;
	if (size < 1)
		return (0);
	else
	{
		while (--size && src)
			*ptr++ = *src++;
		*ptr = '\0';
	}
	//count with null or not??
	return (ft_strlen(dst) + 1);
}

#include<stdio.h>

int main(void)
{
	char *str = "Luiz Soares";
	char strC[15];

	size_t out = ft_strlcpy(strC, str, sizeof(str));
	printf("%s - %lu\n", strC, out);
}