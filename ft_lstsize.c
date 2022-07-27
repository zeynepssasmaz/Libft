/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:34:58 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/04 16:41:17 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list *lst = ft_lstnew("z");
// 	lst->next = ft_lstnew("e");
// 	lst->next->next = ft_lstnew("y");
// 	lst->next->next->next = ft_lstnew("n");
// 	lst->next->next->next->next = ft_lstnew("e");
// 	lst->next->next->next->next->next= ft_lstnew("p");
// 	printf("%d",ft_lstsize(lst));
// }
