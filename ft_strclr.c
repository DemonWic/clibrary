/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 10:20:56 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 10:29:35 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strclr(char *s)
{
	while (*s)
		*s++ = '\0';
}

int		main()
{
	char	str84[6] = "hello";

	printf("\e[34;3m*———————————————————————————————————————————————————————*\e[34;4m\n%s\n", "\e[32;4mFT_STRCLR\e[0m");
	printf("Initial: %s\n", str84);
	ft_strclr(str84);
	printf("ft_strclr return: %s\n", str84);
	if (str84[0] == '\0' && str84[1] == '\0' && str84[2] == '\0' && str84[3] == '\0' && str84[4] == '\0')
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	return (0);
}

