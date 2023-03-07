/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:31:09 by lsoares-          #+#    #+#             */
/*   Updated: 2023/02/22 18:23:30 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

//Iterate the string, return 1 if it finds a \n 0 if not
char	*str_nl(char *str)
{
	if (!str)
		return (0);
	while (*str++)
		if (*str == '\n')
			return (str);
	return (NULL);
}

//Return the size of the string
size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (*str++)
		len++;
	return (len);
}

//Allocate new memory and copy the string in to it
char	*ft_strdup(char *str)
{
	char	*dup;
	char	*tmp;

	if (!str)
		return (NULL);
	dup = malloc(ft_strlen(str) * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	tmp = dup;
	while (*str)
	{
		*tmp++ = *str++;
	}
	*tmp = '\0';
	return (dup);
}
