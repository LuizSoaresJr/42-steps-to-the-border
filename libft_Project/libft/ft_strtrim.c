/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:53:54 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/04 16:51:19 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr_i;
	char	*ptr_j;

	i = 0;
	j = ft_strlen(s1);
	if (!*set)
		return (ft_strdup(s1));
	while (((ptr_i = ft_strchr(set, s1[i])) && (ptr_j = ft_strchr(set, s1[j]))) && i != j)
	{
		if (*ptr_i)
			i++;
		if (*ptr_j)
			j--;
	}
	return (ft_substr(s1, i, j - i));
}

/*
int main(void)
{
	char *str = "ab cd  f    ";
	printf("%s\n", ft_strtrim(str, " "));
	return 0;
}
*/
