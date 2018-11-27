/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:14:45 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 11:29:16 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f) (char))
{
	int		i;
	char	*res;

	i = 0;
	while (s[i])
		i++;
	res = (char *)malloc(i);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	return (res);
}


char	ft_pluss2(char c)
{
	c = 'a' ;
	return (c);
}

int		main()
{
	char s[] = "12345";
	char *r;
	printf("%s\n", s);
	r = ft_strmap(s, &ft_pluss2);
	printf("%s\n", s);
	printf("%s\n", r);
	return (0);
}
