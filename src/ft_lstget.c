/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 18:13:02 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 15:37:13 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

/*
** Gets the index'th element from a list
*/

t_list		*ft_lstget(t_list *head, int index)
{
	if (head == NULL || index < 0)
		return (NULL);
	if (index == 0)
		return (head);
	return (ft_lstget(head->next, index - 1));
}
