/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:05:01 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/04 16:05:02 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i != 0 && (char)c != *(s + i))
	i--;
	if ((char)c == *(s + i))
		return ((char *)(s + i));
	return (0);
}
/*

int main()
{
    char a[] = "zeynep";
    printf("%s",ft_strrchr(a,'e'));
}*/
