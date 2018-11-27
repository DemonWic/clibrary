/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:17:25 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 13:21:01 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	char	*r1;
	char	*r2;

	i = 0;
	r1 = (char *)s1;
	r2 = (char *)s2;
	while ((r1[i] || r2[i]) && i < n)
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

	p = ft_strnequ(s1, s2, 3);
	printf("%i\n", p);
	return (0);
}
