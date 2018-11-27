/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:20:12 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 10:09:54 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}

int	main()
{
	char	*str83;

	printf("\e[34;3m*———————————————————————————————————————————————————————*\e[0m\n%s\n", "\e[32;4mFT_STRDEL\e[0m");
	
	str83 = (char *)malloc(sizeof(char) * 10);
	if (str83)
	{
		ft_strdel(&str83);
		if (str83 == NULL)
		{
			printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		}
		else
		{
			printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
			free(str83);
		}
	}
	return (0);
}
