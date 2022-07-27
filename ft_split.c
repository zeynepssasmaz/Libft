/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 04:26:46 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/04 22:06:01 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_str(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int	ft_count(char const *s, char c)
{
	char	pre_c;
	size_t	i;

	i = 0;
	pre_c = c;
	while (*s)
	{
		if (pre_c == c && *s != c)
			i++;
		pre_c = *s;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	next;
	char	**strs;

	if (s == NULL)
		return (NULL);
	strs = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		next = ft_str(s, c);
		if (next)
		{
			strs[i] = ft_substr(s, 0, next);
			s += next;
			i++;
		}
		else
			s++;
	}
	strs[i] = 0;
	return (strs);
}
// #include<stdio.h>
// int main()
// {
// 	int i;
// 	i=0;
// 	char a[] = "-----zey---nep---sas---maz";
// 	char **b;
// 	b = ft_split(a,'-');
// 	while(b[i] != 0)
// 	{
// 		printf("b nin %d.elemanı: %s\n",i,b[i]);
// 		i++;
// 	}
// }
