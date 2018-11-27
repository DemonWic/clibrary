/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 12:48:48 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 13:06:02 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strequ(char const *s1, char const *s2)
{
	int i;
	char *r1;
	char *r2;

	i = 0;
	r1 = (char *)s1;
	r2 = (char *)s2;
	while (r1[i] || r2[i])
	{
		if (r1[i] != r2[i])
			return (0);
		i++;
	}
	return (1);
}

int		main()
{
	char s1[] = "Hello";
	char s2[] = "Helpo";
	int p;

	p = ft_strequ(s1, s2);
	printf("%i\n", p);
	return (0);
}
