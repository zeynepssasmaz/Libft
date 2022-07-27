/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:04:16 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/04 22:08:44 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	j = dst_len;
	if (dst_len < dstsize - 1 && dstsize)
	{
		while (*(src + i) != '\0' && dst_len + i < dstsize - 1)
		{
			*(dst + j) = *(src + i);
			i++;
			j++;
		}
		*(dst + j) = 0;
	}
	if (dst_len >= dstsize)
		dst_len = dstsize;
	return (dst_len + src_len);
}
// #include<stdio.h>
// int main()
// {
//     char a[] = "zeynep";
//     char b[] = "sasmaz";

//     printf("%zu",ft_strlcat(a,b,6));

// }
