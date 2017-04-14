/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 15:45:22 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 15:34:17 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

/*
** Adds a new element at the beginning of hte list.
*/

void	ft_lst_push_front(t_list **first, t_list *new)
{
	if (*first)
		new->next = *first;
	*first = new;
}
