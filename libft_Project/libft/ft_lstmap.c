/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:56:29 by lsoares-          #+#    #+#             */
/*   Updated: 2022/12/16 19:06:12 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new;
	t_list	*head;

	head = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

/*
int incredible(int var)
{
	int new = var + 1;
	return new;
}

int main(void)
{
	t_list *lst = NULL;
	t_list *new_lst;
	int i1 = 1;
	int i2 = 2;
	int i3 = 3;

		new = ft_lstnew(f(lst->content));
	ft_lstadd_back(&lst, ft_lstnew(&i1));
	ft_lstadd_back(&lst, ft_lstnew(&i2));
	ft_lstadd_back(&lst, ft_lstnew(&i3));
	t_list *temp = lst;
	while (temp)
	{
		printf("[%d] ", *((int *)temp->content));
		temp = temp->next;
	}
	new_lst = ft_lstmap(lst, (void *)incredible, free);
	printf("\n");
	t_list *temp2 = new_lst;
	while (temp2)
	{
		printf("[%d] ", *((int *)temp2->content));
		temp2 = temp2->next;
	}
}
*/
