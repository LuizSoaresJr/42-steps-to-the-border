/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:57:26 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/17 18:01:48 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_d;
	const unsigned char	*ptr_s;

	ptr_d = dest;
	ptr_s = src;
	if (!dest || !src)
		return (NULL);
	if (ptr_s < ptr_d)
		while (n--)
			ptr_d[n] = ptr_s[n];
	else
		ft_memcpy(ptr_d, ptr_s, n);
	return (dest);
}