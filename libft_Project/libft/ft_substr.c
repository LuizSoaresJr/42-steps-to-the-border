/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:22:12 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/28 18:00:08 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	real_len;
	char		*ptr;

	real_len = ft_strlen(s) - start;
	if (len > real_len)
		ptr = malloc(real_len + 1);
	else
		ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

/*
int main (void)
{
	char *s = "Eu sou inteligente.";
	char *resut = ft_substr(s, 7, 0);
	printf("%s\n", resut);
}
*/
