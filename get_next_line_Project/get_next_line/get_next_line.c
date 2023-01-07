/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:29:52 by lsoares-          #+#    #+#             */
/*   Updated: 2023/01/05 21:05:45 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"
#include<stdio.h>

#define BUFFER_SIZE 1

char	*get_next_line(int fd)
{
	size_t	b_readen;
	char	line[BUFFER_SIZE];

	while((b_readen = read(fd, line, BUFFER_SIZE)))
	{
		return (line);
	}
	return (NULL);
}

#include<fcntl.h>

int main(void)
{
	int fd = open("/home/luizsoaresjr/Documents/42-steps-to-the-border/get_next_line_Project/get_next_line/test.txt", O_RDONLY);
	char *line;
	while((line = get_next_line(fd)))
		printf("%s", line);
	close(fd);
	return (0);
}
