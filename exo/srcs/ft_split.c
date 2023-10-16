/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:09:07 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/16 11:09:09 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_words(const char *s, char c)
{
	int	i;
	int	word;

	if (s[0] == 0)
		return (0);
	word = 0;
	i = 0;
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
			word++;
		while (s[i] != c && s[i] != 0)
			i++;
	}
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**list;
	int		i;
	int		j;
	int		k;

	list = malloc((ft_get_words(s, c) + 1) * sizeof(char *));
	if (list == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (k < ft_get_words(s, c))
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i] != 0)
			i++;
		list[k] = ft_substr(s, j, i - j);
		k++;
	}
	list[ft_get_words(s, c)] = 0;
	return (list);
}
