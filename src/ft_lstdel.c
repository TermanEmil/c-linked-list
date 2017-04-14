/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 11:38:50 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 15:30:00 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

/*
** Deletes the entire list starting with head.
*/

void	ft_lstdel(t_list **head, void (*del)(void *, size_t))
{
	if (*head)
	{
		ft_lstdel(&(*head)->next, del);
		ft_lstdelone(head, del);
	}
}
