/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 10:51:54 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 11:08:02 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		f(i,&s[i]);
		i++;
	}
}

void	ft_pluss(unsigned i, char *c)
{
	*c = 'a' + i;
}

int		main()
{
	char s[] = "12345";
	ft_striteri(s, &ft_pluss);
	printf("%s\n", s);
	return (0);
}
