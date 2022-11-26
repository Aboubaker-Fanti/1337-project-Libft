/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:47:07 by afanti            #+#    #+#             */
/*   Updated: 2022/11/10 00:02:48 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	if (src == dst)
		return ((void *)src);
	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
// int main()
// {
// 	char s[] = "abcdef";
// 	char s1[] = "abcdef";
// 	ft_memcpy(s1+2, s1, 4);
// 	ft_memmove(s+2, s, 4);
// 	printf("cpy : %s\n", s1);
// 	printf("move : %s\n", s);
// 	//printf("%s\n", ft_memmove("ad", "ad", 2));
// 	//printf("%s\n",    memmove("ad", "ad", 2));
// }