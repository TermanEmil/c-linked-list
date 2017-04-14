/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 11:38:51 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 15:33:35 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

/*
** The length of the given list.
*/

int		ft_lstlen(t_list *head)
{
	int		result;

	result = 0;
	while (head)
	{
		result++;
		head = head->next;
	}
	return (result);
}
