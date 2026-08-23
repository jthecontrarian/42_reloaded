/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 13:44:58 by jelau             #+#    #+#             */
/*   Updated: 2026/08/22 13:44:59 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	node = ft_create_elem(data);
	node->next = *begin_list;
	*begin_list = node;
}

/*
#include <stdio.h>
#include <stdlib.h>

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

int	main(void)
{
	// create linked list where: A -> B -> C -> NULL
	t_list	*node;
	node = NULL;
	ft_list_push_front(&node, "C");
	ft_list_push_front(&node, "B");
	ft_list_push_front(&node, "A");

	// print out linked list
	print_linked_list(node);
		
	return (0);
}
*/