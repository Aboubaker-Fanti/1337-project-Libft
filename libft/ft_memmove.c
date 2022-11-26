/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:16:57 by afanti            #+#    #+#             */
/*   Updated: 2022/11/10 03:55:58 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*s1;
	const char	*s2;

	if (src == dst)
		return ((void *)src);
	i = 0;
	s1 = (char *)dst;
	s2 = (const char *)src;
	if (s1 > s2)
	{
		while (i < len)
		{
			s1[len - 1] = s2[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (s1);
}
