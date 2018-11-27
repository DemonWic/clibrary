/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 09:23:29 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/26 15:31:08 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}


int		main()
{
	void *vd;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMDEL\x1b[0m");
	vd = malloc(10);
	if (vd)
	{
		ft_memdel(&vd);
		if (vd == NULL)
		{
			printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		}
		else
		{
			printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
			free(vd);
		}
	}

	return (0);
}
