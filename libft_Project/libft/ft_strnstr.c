/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:35:33 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/23 18:56:56 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char		*ptr_big;
	char		*ptr_little;
	size_t		i;
	size_t		j;

	ptr_big = (char *)big;
	ptr_little = (char *)little;
	if (!*ptr_little)
		return (ptr_big);
	i = -1;
	while (ptr_big[++i] && i < len)
	{
		j = 0;
		while (ptr_little[j] && ptr_big[i + j] == ptr_little[j] && \
		(j + i) < len)
		{
			if (!ptr_little[++j])
				return (&ptr_big[i]);
		}
	}
	return (NULL);
}
