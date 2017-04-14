/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 11:38:50 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 15:30:34 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

/*
** Adds an element to the end of the list.
*/

void	ft_lstadd(t_list **head, t_list *new)
{
	if (*head == NULL)
		*head = new;
	else
		ft_lstadd(&(LNEXT(*head)), new);
}
