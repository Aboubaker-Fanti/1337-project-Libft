/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 00:02:00 by afanti            #+#    #+#             */
/*   Updated: 2022/11/07 02:09:15 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long i)
{
	int	k;

	k = 0;
	if (i <= 0)
	{
		k++;
		i *= -1;
	}
	while (i)
	{
		i /= 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	long	s;
	int		c;
	char	*str;

	s = n;
	c = ft_len(s);
	str = malloc(sizeof(char) * (c + 1));
	if (!str)
		return (NULL);
	str[c] = '\0';
	if (s == 0)
		str[0] = '0';
	if (s < 0)
	{
		str[0] = '-';
		s = s * -1;
	}
	while (s > 0)
	{
		str[--c] = 48 + (s % 10);
		s /= 10;
	}
	return (str);
}
