/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:41:36 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/21 13:44:10 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);

void	*ft_calloc(size_t nmemb, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
#endif
