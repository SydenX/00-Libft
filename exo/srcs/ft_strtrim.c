/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:08:40 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/16 11:08:43 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_contains(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_get_size(const char *s1, const char *set)
{
	int		i;
	int		j;

	i = 0;
	while (ft_contains(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (ft_contains(set, s1[j]))
		j--;
	return (j - i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	char	*trim;

	if (s1 == NULL || set == NULL)
		return (NULL);
	trim = malloc((ft_get_size(s1, set) + 1) * sizeof(char));
	if (trim == NULL)
		return (NULL);
	i = 0;
	while (ft_contains(set, s1[i]))
		i++;
	ft_strlcpy(trim, &s1[i], ft_get_size(s1, set));
	return (trim);
}
