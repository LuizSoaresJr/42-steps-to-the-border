/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:17:25 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/10 17:00:43 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	*itoa_rec(long n, char *str)
{	
	if (n < 0)
	{
		n = -n;
		*str++ = '-';
	}
	if (n > 9)
		str = itoa_rec(n / 10, str);
	*str++ = "0123456789"[n % 10];
	*str = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	str[16];
	char	*ptr;

	ptr = str;
	itoa_rec(n, ptr);
	return (ft_strdup(str));
}

/*
int main(void)
{
	char *str = ft_itoa(10);
	printf("%s\n", str);
}
*/
