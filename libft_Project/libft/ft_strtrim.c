/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:53:54 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/24 17:51:46 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr_s1_init;
	size_t	size_s1;
	char	*ptr_s1_end;
	char	*ptr_set;
	char	*tmp;

	ptr_s1_init = (char *)s1;
	size_s1 = ft_strlen(s1);
	ptr_s1_end += size_s1 - 1;
	ptr_set = (char *)set;
	while (ptr_s1_init <= ptr_s1_end)
	{
		*tmp++ = 
	}
}