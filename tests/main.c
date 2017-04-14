/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:42:28 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 17:16:44 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"
#include <stdio.h>
#include <string.h>

void	person_test(void);

void	print_string_node(t_list *node)
{
	puts(LSTR(node));
}

void	print_strings(t_list *strings)
{
	ft_lstiter(strings, &print_string_node);
}

void	add_string(t_list **strings, char *str)
{
	ft_lstadd(strings, ft_lstnew(str, strlen(str) + 1));
}

void	string_test(void)
{
	t_list	*strings;

	strings = NULL;
	add_string(&strings, "Z");
	add_string(&strings, "K");
	add_string(&strings, "W");
	add_string(&strings, "A");
	
	print_strings(strings);
	
	ft_lst_merge_sort(&strings, CAST(&strcmp, int (*)(void*, void*)));
	ft_lstreverse(&strings);

	printf("\nSorted:\n");
	print_strings(strings);

	ft_lstdel(&strings, CAST(&free, void (*)(void*, size_t)));
}

int		main()
{
	printf("\n--------------String test:\n");
	string_test();

	printf("\n--------------Person test:\n");
	person_test();

}
