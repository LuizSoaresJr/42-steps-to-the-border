/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:57:26 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/16 15:22:30 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	tmp[n];
	unsigned char	*ptr;

	i = 0;
	ptr = dest;
	while (i < n)
		tmp[i++] = *(unsigned char *)src++;
	while (i--)
		ptr[i] = tmp[i];
	return (dest);
}
