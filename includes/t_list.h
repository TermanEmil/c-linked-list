/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:21:42 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 16:25:44 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_LIST_H
# define T_LIST_H

# include <stdlib.h>

/*
** List helpers macros
*/
# define CAST(a, t_type)			((t_type)(a))

# define LNEXT(list_cell)			((list_cell)->next)
# define LTONEXT(list_cell)			((list_cell) = LNEXT(list_cell))
# define LCONT(list_cell, t_type)	((t_type)((list_cell)->content))
# define LSTR(list_cell)			LCONT(list_cell, char*)

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memdup(void const *ptr, size_t size);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_lstlen(t_list *head);
void				ft_lst_push_front(t_list **first, t_list *new);
void				ft_lstreverse(t_list **head);
void				ft_lst_merge_sort(t_list **head, int (*f)(void*, void*));
t_list				*ft_lstget(t_list *head, int index);
t_list				*ft_lstpop(t_list *head, int index);

#endif
