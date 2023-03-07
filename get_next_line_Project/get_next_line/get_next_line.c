/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:34:24 by lsoares-          #+#    #+#             */
/*   Updated: 2023/02/22 18:45:12 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

//Write a function which returns a line read from a file descriptor"
char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*line;

	while (read(fd, buffer, BUFFER_SIZE))
	{
		line = ft_strdup(buffer);
		return (line);
	}
	return (NULL);
}


#include<fcntl.h>
int	main(void)
{

	int fd = open("/home/luizsoaresjr/Documents/42-steps-to-the-border/get_next_line_Project/get_next_line/test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Could not open the file\n");
		return(1);
	}

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
