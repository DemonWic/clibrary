/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 09:43:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/29 11:06:23 by ahintz           ###   ########.fr       */
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
	res = (char **)malloc(sizeof(char *) * (count + 1));
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
	while (s[i])
	{
		j = 0;
		if (s[i] != c)
			while (s[i])
			{
				if (s[i] == c)
				{
					res[count][j] = '\0';
					count++;
					break ;
				}
				if (s[i + 1] == '\0')
				{
					res[count][j++] = s[i++];
					res[count][j] = '\0';
					count++;
					break ;
				}

				res[count][j++] = s[i++];
			}
		i++;
	}
	res[count] = "\0";


	return (res);
}

int	main()
{
/*	char s1[]="*hello***fellow**students";
	char **str;
	int i = 0;
	str = ft_strsplit(s1, '*');
	while (i <= 3)
		printf("%s\n", str[i++]);*/
	
	char	str119[] = "hello***hello***hello";
	char	**arr;
	char	str120[] = "iiiiiihelloiihelloihelloiiii";
	char	**arr2;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRSPLIT\x1b[0m");
	printf("Initial: %s\n", str119);
	arr = ft_strsplit(str119, '*');
	printf("ft_strtrim return: \n[0] %s\n[1] %s\n[2] %s\n", arr[0], arr[1], arr[2]);
	if (strcmp(arr[0], "hello") == 0 && strcmp(arr[1], "hello") == 0 && strcmp(arr[2], "hello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str120);
	arr2 = ft_strsplit(str120, 'i');
	printf("ft_strtrim return: \n[0] %s\n[1] %s\n[2] %s\n", arr2[0], arr2[1], arr2[2]);
	if (strcmp(arr[0], "hello") == 0 && strcmp(arr[1], "hello") == 0 && strcmp(arr[2], "hello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	return (0);
}
