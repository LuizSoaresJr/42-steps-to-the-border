/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:49:41 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/18 15:10:26 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	if (dest == src || n == 0)
		return (dest);
	ptr = dest;
	i = 0;
	while (i < n)
		ptr[i++] = *(unsigned char *)src++;
	return (ptr);
}
