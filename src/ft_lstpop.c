/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:57:54 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 16:02:01 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

/*
** Removes the index'th node and returns it.
*/

static t_list	*lstpop_rec(t_list *head, int index, t_list *prev)
{
	if (head == NULL)
		return (NULL);
	if (index <= 0)
	{
		if (prev != NULL)
			prev->next = head->next;
		return (head);	
	}
	else
		return (lstpop_rec(head->next, index - 1, head));
}

t_list	*ft_lstpop(t_list *head, int index)
{
	return (lstpop_rec(head, index, NULL));
}
