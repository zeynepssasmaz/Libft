/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 04:10:02 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/04 23:00:08 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tmp;

	if (!s)
		return (NULL);
	tmp = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
// char lower(unsigned int i,char b)
// {
// 	if(b >='a' && b<='z')
// 		return(b-32);
// 	return (b);
// }
// #include<stdio.h>
// int main()
// {
// 	char a[] = "zeynep";
// 	char *b;
// 	b =ft_strmapi(a,lower);
// 	printf("%s",b);
// }
