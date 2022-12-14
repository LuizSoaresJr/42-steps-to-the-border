/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:24:03 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/12 22:46:23 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node -> content = (void *)content;
	node -> next = NULL;
	return (node);
}

/*
int	main(void)
{
	int n = 1001;
	t_list *list;
	list = ft_lstnew(&n);
	printf("%d\n", *(int *)list -> content);
}
*/
