/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 12:55:19 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/29 13:00:08 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	int fd;
	fd = open(argv[1], O_WRONLY | O_APPEND, 0);
	ft_putendl_fd("Hello", fd);
	return (0);
}
