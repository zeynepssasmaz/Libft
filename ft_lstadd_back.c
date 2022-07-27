/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:22:26 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/04 23:56:34 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	list = *lst;
	while (list->next != NULL)
		list = list->next;
	list->next = new;
}
// #include<stdio.h>
// int main()
// {
// 	t_list *lst;
// 	lst = ft_lstnew("zeynep");
// 	t_list *lst2;
// 	lst2=ft_lstnew("sasmaz");
// 	lst->next=lst2;
// 	t_list *new;
// 	new =ft_lstnew("42");
// 	ft_lstadd_back(&lst,new);
// 	printf("%s",lst2->next->content);
// }
