/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:05:56 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/04 17:42:27 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst);
		del((*lst)->content);
		free(*lst);
		*lst = tmp->next;
	}
}
// void del(void *content)
// {
//     free(content);
// }
// int main()
// {
//     t_list  *lst;
//     t_list  *lst2;
//     char    *str;
//     char    *str2 = "helloworld";
//     int     i = 0;
//     str = malloc(sizeof(char) * ft_strlen(str2) + 1);
//     while (str2[i])
//     {
//         str[i] = str2[i];
//         i++;
//     }
//     lst = malloc(sizeof(t_list));
//     lst->content = (void *)str;
//     lst->next = NULL;
//     lst2 = ft_lstnew(ft_strdup("selamdunya"));
//     lst->next = lst2;
//     printf("%s\n", (char *)lst->content);
//     printf("%p\n", (char *)lst->next);
//     ft_lstclear(&lst, del);
//     printf("%s\n", (char *)lst->content);
//     printf("%p\n", (char *)lst->next);
// }
