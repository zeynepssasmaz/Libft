/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:05:10 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/04 16:05:12 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*son;
	size_t	m;
	size_t	b;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	m = 0;
	while ((m < len) && (s[m + start] != '\0'))
		m++;
	son = (char *)malloc((sizeof(char) * m) + 1);
	if (son == NULL)
		return (NULL);
	b = 0;
	while (b < m)
	{
		son[b] = s[start + b];
		b++;
	}
	son[b] = '\0';
	return (son);
}

// int main(){
// 	char a[] = "zeynep sasmaz";
// 	printf("%s",ft_substr(a,6,7));
// }
