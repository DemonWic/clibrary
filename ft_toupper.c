/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:54:18 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/25 17:00:54 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_toupper(int c)
{
	unsigned char	sim;

	sim = (unsigned char)c;
	if (sim >= 97 && sim <= 122)
		return (sim - 32);
	else
		return (sim);
}

int		main()
{
	char m = 'A';
	int p1;
	int p2;
	p1 = toupper(m);
	p2 = ft_toupper(m);
	printf("%i\n", p1);
	printf("%i\n", p2);
	return (0);
}
