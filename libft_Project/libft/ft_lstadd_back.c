/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:02:27 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/12 23:19:40 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if(!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if(!*lst)
	{
		*lst = new;
		return ;
	}
	last->next = new;
}
