/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 12:35:00 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/29 12:49:58 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	int fd;
	fd = open(argv[1], O_WRONLY | O_APPEND, 0);
	ft_putchar_fd('A', fd);
	return (0);
}
