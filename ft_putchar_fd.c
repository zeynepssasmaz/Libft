/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <zsasmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:43:16 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/07/04 20:26:19 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include<fcntl.h>
// int main()
// {
// 	char a = 'a';
// 	int fd = open("a.txt" , O_CREAT | O_RDWR , 0777 );
// 	ft_putchar_fd(a,fd);
// }
