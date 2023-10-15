/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:42:15 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/15 21:42:17 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*copy;

	copy = b;
	while (len > 0)
	{
		*copy = c;
		copy++;
		len--;
	}
	return (b);
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	printf("%s", ft_memset(argv[1]+1, 'z', 2));
// 	return (argc);
// }
