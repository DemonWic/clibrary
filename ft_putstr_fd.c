/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 12:52:14 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/29 12:53:56 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	int fd;
	fd = open(argv[1], O_WRONLY | O_APPEND, 0);
	ft_putstr_fd("Hello", fd);
	return (0);
}
