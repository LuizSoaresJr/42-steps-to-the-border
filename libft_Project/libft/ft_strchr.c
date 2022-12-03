/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:04:06 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/02 12:55:46 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	printf("char ignored by strchr:\n");
	while (*ptr && *ptr != c)
		printf("%c", *ptr++);
	printf("\n-------------\n");
	if (*ptr == c)
	{
		printf("String returned by strchr:\n");
		printf("%s\n----------------\n", ptr);
		return ((char *)ptr);
	}
	else
	{
		printf("Not found the char in the string\n");
		return (0);	
	}
}
