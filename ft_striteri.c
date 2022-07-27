/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 21:44:44 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/05 01:45:33 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
// #include<stdio.h>
// void lower(unsigned int i, char *s)
// {
// 	if (s[0] >= 65 && s[0] <= 90)
//         s[0] = s[0] + 32;
// }
// int main()
// {
//     char str[] = "ZEYNEP";
//     ft_striteri(str, lower);
//     printf("%s", str);
// }
