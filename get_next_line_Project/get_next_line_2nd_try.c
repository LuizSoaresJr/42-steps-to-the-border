/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:21:10 by lsoares-          #+#    #+#             */
/*   Updated: 2023/01/04 20:26:26 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buffer;
	size_t		size;
	
	size = BUFFER_SIZE;
	if(fd == -1 || !size)
		return (NULL);
	buffer = ft_calloc(sizeof(char), size + 1);
	if (!buffer)
		return (NULL);
	while (read(fd, buffer, size))
		if (*buffer)
			return (buffer);
	return (NULL);
}
