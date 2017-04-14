/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 17:00:05 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 17:00:16 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"
#include <stdio.h>
#include <string.h>

typedef struct	s_person
{
	char		name[32];
	int			age;
}				t_person;

t_person		*new_person(char *name, int age)
{
	static t_person	person;

	strncpy(person.name, name, sizeof(name) - 1);
	person.age = age;
	return (&person);
}

void	print_person_node(t_list *person_node)
{
	printf("name: %s; age: %d\n",
		LCONT(person_node, t_person*)->name,
		LCONT(person_node, t_person*)->age);
}

void	delete_person(t_person *person)
{
	free(person);
}

t_list	*filter_person(t_list *person_node)
{
	if (LCONT(person_node, t_person*)->age >= 18)
		return (ft_lstnew(
			new_person(LCONT(person_node, t_person*)->name,
				LCONT(person_node, t_person*)->age),
			sizeof(t_person)));
	return (NULL);
}

int		age_cmp_ascending(t_person *a, t_person *b)
{
	return (b->age - a->age);
}

int		age_cmp_descending(t_person *a, t_person *b)
{
	return (a->age - b->age);
}

void	print_people(t_list *people)
{
	ft_lstiter(people, CAST(&print_person_node, void (*)(t_list*)));
}

void	person_test(void)
{
	t_list	*people;
	t_list	*tmp;
	t_list	*majors;

	people = NULL;
	ft_lstadd(&people, ft_lstnew(new_person("Emil", 20), sizeof(t_person)));
	ft_lstadd(&people, ft_lstnew(new_person("Kesha", 1), sizeof(t_person)));
	ft_lstadd(&people, ft_lstnew(new_person("A", 13), sizeof(t_person)));
	ft_lstadd(&people, ft_lstnew(new_person("B", 18), sizeof(t_person)));
	ft_lstadd(&people, ft_lstnew(new_person("C", 20), sizeof(t_person)));
	ft_lstadd(&people, ft_lstnew(new_person("D", 11), sizeof(t_person)));
	ft_lstadd(&people, ft_lstnew(new_person("Z", 112311), sizeof(t_person)));

	printf("Everyone:\n");
	print_people(people);

	printf("\nRemove Z\n");
	tmp = ft_lstpop(people, 6);
	ft_lstdelone(&tmp, CAST(&delete_person, void (*)(void*, size_t)));

	majors = ft_lstmap(people, &filter_person);
	printf("\nMajors:\n");
	print_people(majors);
	ft_lstdel(&majors, CAST(&delete_person, void (*)(void*, size_t)));
	
	printf("\nSorting ascending:\n");
	ft_lst_merge_sort(&people, CAST(&age_cmp_ascending, int (*)(void*, void*)));
	print_people(people);
	
	printf("\nSorting descending:\n");
	ft_lst_merge_sort(&people, CAST(&age_cmp_descending, int (*)(void*, void*)));
	print_people(people);

	ft_lstdel(&people, CAST(&delete_person, void (*)(void*, size_t)));
}
