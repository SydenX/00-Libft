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

	if (dst == NULL || src == NULL)
		return (0);
	dstln = 0;
	while (dst[dstln] != 0 && (int)dstsize > dstln)
		dstln++;
	i = 0;
	while (i < (int)dstsize - dstln - 1 && src[i] != 0)
	{
		dst[dstln + i] = src[i];
		i++;
	}
	if (i > 0)
		dst[dstln + i] = 0;
	return (dstln + ft_strlen(src));
}
