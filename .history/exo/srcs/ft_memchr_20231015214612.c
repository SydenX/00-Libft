/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:41:45 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/15 21:41:47 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*copy;

	i = 0;
	copy = (unsigned char *) s;
	while (copy[i] != (unsigned char) c && i < (int)n - 1)
		i++;
	if (copy[i] != (unsigned char) c)
		return (NULL);
	return ((void *)&copy[i]);
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	printf("%s", (unsigned char *)ft_memchr((const void *)argv[1],argv[2][0],5));
// 	return (argc);
// }
