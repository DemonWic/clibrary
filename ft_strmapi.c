/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:14:45 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 12:45:37 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	while (s[i])
		i++;
	res = (char *)malloc(i);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}


char	ft_pluss2(unsigned int i, char c)
{
	c = 'a' + i;
	return (c);
}

int		main()
{
	char s[] = "12345";
	char *r;
	printf("%s\n", s);
	r = ft_strmapi(s, &ft_pluss2);
	printf("%s\n", s);
	printf("%s\n", r);
	return (0);
}
