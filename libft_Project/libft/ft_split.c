/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:53:36 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/16 13:27:20 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	word_c(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i])
		if (s[i++] == c && (s[i] != c && s[i]))
			counter++;
	if (s[0] != c && s[0])
		counter++;
	return (counter);
}

static size_t	split_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	wc;
	char	*ptr;
	char	**result;

	i = 0;
	wc = word_c(s, c);
	ptr = (char *)s;
	result = malloc((wc + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < wc)
	{
		if (*ptr != c)
			result[i++] = ft_substr(ptr, 0, split_len(ptr, c));
		ptr = ft_strchr(ptr, c) + 1;
	}
	result[i] = NULL;
	return (result);
}

/*
int main(void)
{
	char *str = "";
	char **ptr = ft_split(str, '');
	size_t i = 0;
	while (ptr[i])
	{
		printf("ptr[%lu]: %s\n", i, ptr[i]);
		i++;
	}
}
*/
