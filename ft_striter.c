/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 10:33:13 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 10:50:12 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striter(char *s, void (*f) (char *))
{
	int i;

	i = 0;
	while (s[i])
		f(&s[i++]);
}

void	ft_plus(char *c)
{
	*c = 'a';
}

int		main()
{
	char s[] = "12345";
	ft_striter(s, &ft_plus);
	printf("%s\n", s);
	return (0);
}
