/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:17:25 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/07 23:12:52 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_itoa(int n)
{
	char	*ptr;
	char	*tmp;

	if (!n)
	{
		ptr = malloc(sizeof(char));
		if (!ptr)
			return (NULL);
		*ptr = '\0';
	}
	tmp = ft_itoa(n % 10); 
	return (tmp);
}

int main(void)
{
	char *str = ft_itoa(1);
	printf("%s\n", str);
}
