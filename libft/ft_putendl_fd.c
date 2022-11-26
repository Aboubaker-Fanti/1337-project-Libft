/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:53:43 by afanti            #+#    #+#             */
/*   Updated: 2022/11/10 01:27:07 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			write (fd, &s[i], 1);
			i++;
		}
	}
	write (fd, "\n", 1);
}

// int main()
// {
// 	int fd = open("a.txt", O_CREAT | O_WRONLY, 0777);
// 	//ft_putendl_fd("1337", fd);
// 	printf("%d\n", fd);
// 	//close (fd);
// 	int fd1 = open("a.txt", O_CREAT | O_WRONLY, 0777);
// 	//ft_putendl_fd("1337", fd1);
// 	printf("%d\n", fd1);
// 	close (fd1);
// }