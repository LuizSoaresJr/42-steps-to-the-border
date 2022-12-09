/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:17:25 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/09 18:17:29 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	log10(long long n)
{
		
}

static char	*itoa_rec(long long n, char *str)
{
	if (n < 0)
	{
		n = -n;
		*str++ = '-';
	}
	if (n > 9)
		str = itoa_rec(n / 10, str);
	*str++ = "0123456789"[n % 10];
	*str = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	char	ptr[16];

	return (ft_strdup(itoa_rec(n, ptr)));
}

/*
int main(void)
{
	char *str = ft_itoa(10);
	printf("%s\n", str);
}
*/