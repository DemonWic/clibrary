/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 09:43:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/23 10:03:59 by ahintz           ###   ########.fr       */
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
					break;
				}
				i++;
				j++;
			}
		}
			i++;
	}


	return (res);
}

int	main()
{
	char s1[]="*hello***fellow**students*";
	ft_strsplit(s1, '*');
	return (0);
}
