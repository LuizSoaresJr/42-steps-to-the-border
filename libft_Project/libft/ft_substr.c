/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:22:12 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/24 18:58:30 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	int		i;

	ss = malloc(len * sizeof(char));
	ss[len - 1] = '\0';
	i = 0;
	while (s[start] && --len)
		ss[i++] = s[start++];
	return (ss);
}
