/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:49:41 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/17 15:50:41 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = dest;
	i = 0;
	if (!dest || !src)
		return (NULL);
	while (i < n)
		ptr[i++] = *(unsigned char *)src++;
	return (ptr);
}
