/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:17:51 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/13 19:52:29 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstclear(t_list **lst, void(*del)(void *))
{
	if(!*lst)
		return ;
	while(*lst)
	{
		del(*lst);
		free(lst);
		*lst = (*lst)->next;
	}
	lst = NULL;
}
