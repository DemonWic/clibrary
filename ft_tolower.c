/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 17:06:15 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/25 17:11:19 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_tolower(int c)
{
	unsigned char	sim;

	sim = (unsigned char)c;
	if (sim >= 65 && sim <= 90)
		return (sim + 32);
	else
		return (sim);
}

int		main()
{
	char m = 'A';
	int p1;
	int p2;
	p1 = tolower(m);
	p2 = ft_tolower(m);
	printf("%i\n", p1);
	printf("%i\n", p2);
	return (0);
}
