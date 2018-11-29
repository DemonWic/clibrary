/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 09:43:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/29 11:04:03 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int count;
	char **res=NULL;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c &&(s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;

	}
	printf("%i\n", count);
	res = (char **)malloc(sizeof(char *) * count);
	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] != c)
		{
			while (s[i])
			{
				if (s[i + 1] == c || s[i + 1] == '\0')
				{
					res[count] = (char *)malloc(j + 2);
					count++;
					printf("%i %i\n", i, j); 
					break ;
				}
				i++;
				j++;
			}
		}
			i++;
	}
	i = 0;
	count = 0;
	while (*s)
	{
		j = 0;
		if (*(s) != c)
			while (*s)
			{
				if (*(s) == c || *(s) == '\0')
				{
					*(res[count]) = '\0';
					printf("%i\n", count);
					count++;
					break ;
				}
				*(res[count])++ = *s++;
			}
		s++;
		i++;
	}


	return (res);
}

int	main()
{
	char s1[]="*hello***fellow*students";
	char **str;
	int i = 0;
	str = ft_strsplit(s1, '*');
	while (i < 3)
		printf("%s\n", str[i++]);
	return (0);
}
