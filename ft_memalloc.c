/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 17:47:14 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/26 15:35:43 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memalloc(size_t size)
{
	char	*res;
	char	*con;
	size_t	i;

	res = (char *)malloc(size);
	if (res == NULL)
		return (NULL);
	i = 0;
	con = res;
	while (i < size)
	{
		*res++ = 0;
		i++;
	}
	return (con);
}

int		main()
{
	char	*str79;
	char	*str80;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMALLOC\x1b[0m");
	str79 = (char *)ft_memalloc(5);
	if (str79 && str79[0] == '\0' && str79[1] == '\0' && str79[2] == '\0' && str79[3] == '\0' && str79[4] == '\0')
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		free(str79);
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	str80 = (char *)ft_memalloc(50);
	if (str80 && str80[0] == '\0' && str80[49] == '\0')
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		free(str80);
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	return (0);
}
