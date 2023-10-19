/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:08:05 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/16 16:08:06 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cpy;
	t_list	*lastcpy;

	cpy = *lst;
	while (cpy)
	{
		del(cpy->content);
		lastcpy = cpy->next;
		free(cpy);
		cpy = lastcpy;
	}
	*lst = NULL;
}
