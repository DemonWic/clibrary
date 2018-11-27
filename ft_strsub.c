/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:31:43 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 14:54:26 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *res;
	
	i = 0;
	res = (char *)malloc(len);
	if (res == NULL)
		return (NULL);
	s += start;
	while (*s || (i < len))
	{
		*res++ = *s++;
		i++;
	}
	return (res - i);
}

int		main()
{
	char	str93[6] = "hello";
	char	*str94;

	printf("*\e[34;3m———————————————————————————————————————————————————————\e[0m*\n%s\n", "\e[32;4mFT_STRSUB\e[0m");
	printf("Initial: %s\n", str93);
	str94 = ft_strsub(str93, 2, 5);
	printf("ft_strsub return: %s\n", str94);
	if (strcmp(str94, "llo") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	return (0);

}
