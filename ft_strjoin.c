/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:03:45 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 15:24:53 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_strlen.c"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int size;
	char *res;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *)malloc(size);
	if (res == NULL)
		return (NULL);
	while (i < size)
	{
		if (*s1)
			*res++ = *s1++;
		if (*s1 == '\0' && *s2)
			*res++ = *s2++;
		i++;
	}
	*res = '\0';
	return (res - (i - 1));
}

int		main()
{
/*	char s1[] = "Hello";
	char s2[] = " World";
	char *s3;
	s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	return (0);*/
	char	str95[3] = "he";
	char	str96[4] = "llo";
	char	*str97;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRJOIN\x1b[0m");
	printf("Initial: %s\n", str95);
	printf("Initial: %s\n", str96);
	str97 = ft_strjoin(str95, str96);
	printf("ft_strjoin return: %s\n", str97);
	if (strcmp(str97, "hello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	return (0);
}
