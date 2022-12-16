/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:53:54 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/16 14:08:13 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	if (*set)
	{	
		while (ft_strchr(set, s1[i]) != NULL)
			i++;
		while (ft_strchr(set, s1[j]) != NULL)
			j--;
	}
	return (ft_substr(s1, i, (j + 1) - i));
}

/*
int main(void)
{
	char *str = "ab cd  f    ";
	printf("%s\n", ft_strtrim(str, " "));
	return 0;
}
*/
