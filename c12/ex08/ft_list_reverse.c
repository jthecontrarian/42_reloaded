/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 23:34:38 by jelau             #+#    #+#             */
/*   Updated: 2026/08/23 23:34:39 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

/*
typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;
*/

void ft_list_reverse(t_list **begin_list)
{
	t_list *node;
	t_list *prev;
	t_list *next;

	node = *begin_list;
	prev = NULL;
	while(node != NULL)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}
	*begin_list = prev;
}

/*
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	node = ft_create_elem(data);
	node->next = *begin_list;
	*begin_list = node;
}

void	print_linked_list(t_list *node)
{
	t_list *temp;
	temp = node;
	while (temp != NULL)
	{
		printf("data=%s,", (char *)temp->data);
		printf("&data=%p,", temp->data);
		printf("next=%p\n", temp->next);
		temp = temp->next;
	}
}

int main(void)
{
	// create linked list where: A -> B -> C -> NULL
	t_list *node;
	node = NULL;
	ft_list_push_front(&node, "C");
	ft_list_push_front(&node, "B");
	ft_list_push_front(&node, "A");

	// print out linked list from A
	print_linked_list(node);

	// reverse linked list
	ft_list_reverse(&node);

	// print out linked list from C
	print_linked_list(node);

	return (0);
}
*/