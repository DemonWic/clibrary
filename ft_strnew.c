/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:47:04 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/26 16:09:40 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	size_t i;
	char *res;
	char *con;

	i = 0;
	res = (char *)malloc(size);
	if (res == NULL)
		return (NULL);
	con = res;
	while (i < size)
		res[i++] = '\0';
	return (con);
}

int main()
{
	char	*str81;
	char	*str82;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRNEW\x1b[0m");
	str81 = ft_strnew(5);
	if (str81 && str81[0] == '\0' && str81[1] == '\0' && str81[2] == '\0' && str81[3] == '\0' && str81[4] == '\0')
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		free(str81);
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	str82 = ft_strnew(50);
	if (str82 && str82[0] == '\0' && str82[49] == '\0')
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		free(str82);
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	return (0);
}
