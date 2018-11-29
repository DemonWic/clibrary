/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 11:08:45 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/29 11:48:21 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *res = NULL;
	int size;
	int k;
	int nb;

	size = 0;
	k = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		size++;
		n *= -1;
		k++;
	}
	nb = n;
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	res = (char *)malloc(size + 1);
	res[size--] = '\0';
	while (nb > 0)
	{
		res[size--] = (nb % 10) + 48;
		nb /= 10;
	}
	if (k)
		res[size] = '-';
	return (res);
}

int		main()
{
/*	int n = -12345;
	char *r;
	r = ft_itoa(n);
	printf("%s\n", r);*/

	char	*str109;
	char	*str110;
	char	*str111;
	char	*str114;
	char	*str115;
	char	str118[2] = "8";
	char	str112[3] = "42";
	char	str113[4] = "-42";
	char	str116[12] = "-2147483648";
	char	str117[11] = "2147483647";
	int		intg8 = 8;
	int		intg9 = 42;
	int		intg10 = -42;
	int		intg11 = -2147483648;
	int		intg12 = 2147483647;


	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ITOA\x1b[0m");
	printf("Initial: %d\n", intg8);
	str109 = ft_itoa(intg8);
	printf("ft_itoa return: %s\n", str109);
	if (strcmp(str109, str118) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %d\n", intg9);
	str110 = ft_itoa(intg9);
	printf("ft_itoa return: %s\n", str110);
	if (strcmp(str110, str112) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %d\n", intg10);
	str111 = ft_itoa(intg10);
	printf("ft_itoa return: %s\n", str111);
	if (strcmp(str111, str113) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %d\n", intg11);
	str114 = ft_itoa(intg11);
	printf("ft_itoa return: %s\n", str114);
	if (strcmp(str114, str116) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %d\n", intg12);
	str115 = ft_itoa(intg12);
	printf("ft_itoa return: %s\n", str115);
	if (strcmp(str115, str117) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	return (0);
}	
