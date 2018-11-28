/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:41:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/25 10:25:10 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *h;
	char *n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (n[0] == '\0')
		return (h);
	while (*h++)
	{
		if (*(h) == *(n))
			while(*n)
			{
				if (h++ == n++ && n + 2 == '\0')
					return (h);
				else if (h != n)
				{
					h = &(h - n);
					break ;
				}
			}
	}
	return (NULL);
}

int		main()
{
	char s1[] = "Hello world man";
	char s2[] = " ";
	char *s3;
	char *s4;
	s3 = strstr(s1, s2);
	s4 = ft_strstr(s1, s2);
	printf("%s\n", s3);
	printf("%s\n", s4);
	return (0);
}
