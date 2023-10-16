/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:02:59 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/16 14:03:16 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*cpy;

	if (*list == NULL)
	{
		*list = new;
		return ;
	}
	cpy = *list;
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = new;
}
