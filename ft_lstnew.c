/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:46:10 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/04 16:00:13 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (0);
	lst->content = content;
	lst->next = 0;
	return (lst);
}

// int main()
// {
// 	char a[] = "zeynep";
// t_list *lst;

// lst = ft_lstnew((void *)a);
// printf("%s",lst->content);
// }
