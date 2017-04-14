/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 11:38:52 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 16:29:20 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

/*
** Creates a new list from the given list.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;

	if (!lst)
		return (NULL);
	result = NULL;
	while (lst)
	{
		ft_lstadd(&result, f(lst));
		lst = lst->next;
	}
	return (result);
}
