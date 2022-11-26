/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:44:19 by afanti            #+#    #+#             */
/*   Updated: 2022/11/10 20:57:03 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	c;

	s = ft_strlen((char *)src);
	if (dstsize == 0)
		return (s);
	d = ft_strlen(dst);
	c = 0;
	if (d >= dstsize)
		return (s + dstsize);
	while (src[c] && c < dstsize - d - 1)
	{
		dst[d + c] = src[c];
		c++;
	}
	dst[d + c] = '\0';
	return (d + s);
}
