/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:12:17 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/05 00:09:12 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!f || !lst)
		return ;
	while (lst)
	{
		tmp = lst->next;
		f(lst->content);
		lst = tmp;
	}
}
// void lower(void *s)
// {
// 	size_t	i;

// 	while(!(unsigned char *)s)
// 	{
// 		if(((unsigned char *)s)[i]>='a' &&((unsigned char *)s)[i]<='z')
// 			((unsigned char *)s)[i] = ((unsigned char *)s)[i]+32;
// 		i++;
// 	}

// }
// #include<stdio.h>
// int main()
// {
// 	t_list	*lst;
// 	lst=ft_lstnew("zeynep");
// 	ft_lstiter(lst,lower);
// 	printf("%s",lst->content);
// }
