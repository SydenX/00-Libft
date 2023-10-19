/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:52:49 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/12 12:59:50 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*copy;

	copy = (char *) s;
	while (*copy != 0)
	{
		if (*copy == (char)c)
			return (copy);
		copy++;
	}
	if (*copy == (char)c)
		return (copy);
	return (NULL);
}
