/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:42:36 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/15 21:42:37 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	dstln;

	if (dst[0] == 0 && src[0] == 0)
		return (0);
	dstln = 0;
	while (dst[dstln] != 0 && dstsize > (size_t)dstln)
		dstln++;
	i = 0;
	while ((size_t)(i + dstln + 1) < dstsize && src[i] != 0)
	{
		dst[dstln + i] = src[i];
		i++;
	}
	if (i > 0)
		dst[dstln + i] = 0;
	return (dstln + ft_strlen(src));
}
