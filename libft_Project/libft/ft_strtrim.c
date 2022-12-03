/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:53:54 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/02 14:07:34 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *ptr = (char *)s1;
	int counter = 1;
	while ((ptr = ft_strchr(set, *ptr)) && *ptr)
		printf("Entered in the while loop %d times, set value:%c\nptr value:%s\n--------end------\n\n", counter++, *ptr++, ptr);
	return (ptr);
}

int main(void)
{
	char *str = "this is to be cut this not, cut this is to be";
	printf("what returned from strtrim:\n%s\n", ft_strtrim(str, "cut"));
}
