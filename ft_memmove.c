/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:55:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/22 19:04:52 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;
	char	temp[len];

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (i < len)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = temp[i];
		i++;
	}
	return (d);
}
