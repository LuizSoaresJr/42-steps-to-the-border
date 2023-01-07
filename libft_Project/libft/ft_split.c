/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:53:36 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/29 13:14:19 by lsoares-         ###   ########.fr       */
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
	{
		if (s[i++] == c)
			if (s[i] != c && s[i])
				counter++;
	}
	if (s[0] != c && s[0])
		counter++;
	return (counter);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	**split_protec(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_l;
	size_t	sp_i;
	char	**split_r;

	split_r = malloc((word_c(s, c) + 1) * sizeof(char *));
	if (!split_r)
		return (NULL);
	sp_i = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_l = word_len(s, c);
			split_r[sp_i] = ft_substr(s, 0, word_l);
			if (!split_r[sp_i])
				return (split_protec(split_r));
			s += word_l;
			sp_i++;
		}
		if (*s)
			s++;
	}
	split_r[sp_i] = NULL;
	return (split_r);
}

/*
int main(void)
{
	char *str = "luiz fernando";
	char **ptr = ft_split(str, ' ');
	size_t i = 0;
	while (ptr[i])
	{
		printf("ptr[%lu]: %s\n", i, ptr[i]);
		i++;
	}
}
*/
