/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 15:29:52 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 15:35:03 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

static t_list	*reversed_list(t_list *nodes, int len)
{
	t_list	*result[len];
	t_list	*aux;
	int		i;

	if (nodes == NULL || nodes->next == NULL)
		return (nodes);
	aux = nodes;
	i = 0;
	while (i < len && aux)
	{
		result[i] = aux;
		i++;
		aux = aux->next;
	}
	i = len - 1;
	while (i > 0)
	{
		result[i]->next = result[i - 1];
		i--;
	}
	result[0]->next = NULL;
	return (result[len - 1]);
}

void			ft_lstreverse(t_list **head)
{
	if (head != NULL && *head != NULL)
		*head = reversed_list(*head, ft_lstlen(*head));
}
