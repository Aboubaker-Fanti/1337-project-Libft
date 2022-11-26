/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:10:03 by afanti            #+#    #+#             */
/*   Updated: 2022/11/10 00:39:47 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*d1;
	unsigned char	*d2;

	i = 0;
	d1 = (unsigned char *) s1;
	d2 = (unsigned char *) s2;
	while (i < n)
	{
		if (d1[i] != d2[i])
		{
			return (d1[i] - d2[i]);
		}
		i++;
	}
	return (0);
}
