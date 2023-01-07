/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:34:24 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/22 01:47:49 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

//Write a function which returns a line read from a file descriptor"
char	*get_next_line(int fd)
{
	char	*line;
	char	buffer;
	size_t	size;
	size_t	i;
	size_t	foo;
	
	foo = 0;
	buffer = 0;
	size = BUFFER_SIZE + 1;
	if (size < 1 || fd == -1)
		return (NULL);
	i = 0;
	line = ft_calloc(sizeof(char), size);
	if (!line)
		return (NULL);
	while ((foo = read(fd, &buffer, sizeof(char))) && i < size && buffer != '\n')
	{
		line[i] = buffer;
		i++;
	}
	if (foo < 1 || line[i] != '\n')
	{
		free(line);
		return (NULL);
	}
	line[i] = '\n';
	return (line);
}
/*
#include<fcntl.h>
#include<stdio.h>
int	main(void)
{

	int fd = open("/home/luizsoaresjr/Documents/42-steps-to-the-border/Notes/Cpu.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Could not open the file\n");
		return(1);
	}

	int 	fd = 1000;
	char 	*line;
	int i = 10;
	while ((line = get_next_line(fd)) && i)
	{
	 	printf("%s", line);
		i--;
	}
	close(fd);
	//printf("%s", get_next_line(0));
	free(line);
	return (0);
}
*/
