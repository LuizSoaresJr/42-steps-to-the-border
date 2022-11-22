/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:52:48 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/21 18:47:28 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	char	*ptr;

	dst_len = 0;
	ptr = dst;
	while (*ptr++)
		dst_len++;
	if (dst_len < 1)
		return (dst_len + 1);
	else
	{
		while (--size && src)
			*ptr++ = *src++;
		*ptr = '\0';
	}
	return (0);
}