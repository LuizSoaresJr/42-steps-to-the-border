/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:04:06 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/16 19:22:26 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (*ptr && *ptr != c)
		ptr++;
	if (*ptr == c)
		return ((char *)ptr);
	else
		return (0);
}

int main(void)
{
	char *str = "teste";
	printf("%ld\n", (ft_strchr(str, 'e' + 256) - str));
}