/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:53:54 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/03 17:07:51 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	// if (!*set)
	// 	return (ft_strdup(""));
	while (!ft_strchr(set, s1[i]) && !ft_strchr(set, s1[j]))
	{
		i++;
		j--;
	}
	return (ft_substr(s1, i, j - i));
}


int main(void)
{
	char *str = "lorem ipsum dolor sit amet";
	printf("%s\n", ft_strtrim(str, "te"));
	return 0;
}
