/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:04:06 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/21 15:59:45 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		term;
	char	*ptr;

	term = *ptr;
	ptr = s;
	while (*ptr++)
		;
	while (*ptr != term && *ptr != c)
		ptr--;
	if (*ptr == c)
		return (ptr);
	else
		return (0);
}

#include<stdio.h>

int main(void)
{
	char *str = "Luiz Fernando";
	char *ptr_str = str;
	char *ptr = ft_strrchr(str, '\0');

	while (*ptr_str)
	{
		printf("%2c - %p\n", *ptr_str, ptr_str);
		ptr_str++;
	}
	if (*ptr_str == 0)
		printf("\\0 - %p\n", ptr_str);
	putchar('\n');

	if (*ptr == 0)
		printf("\\0 - %p\n", ptr);
	else
		printf("%c - %p\n", *ptr, ptr);
}
