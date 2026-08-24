/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 22:56:04 by jelau             #+#    #+#             */
/*   Updated: 2026/08/23 22:56:05 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *node;

	node = begin_list;
	while (nbr > 0)
	{
		if (node == NULL)
			return(NULL);
		node = node->next;
		nbr--;
	}
	return (node);
}

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

int	main(void)
{
    // create linked list where: A -> B -> C -> NULL
	t_list *node;
	node = NULL;
	ft_list_push_front(&node, "C");
	ft_list_push_front(&node, "B");
	ft_list_push_front(&node, "A");

	// print out linked list
	print_linked_list(node);

	// print out result
	t_list *temp;
	temp = ft_list_at(node, 0);
	printf("temp->data=%s\n", (char *)temp->data);
	temp = ft_list_at(node, 1);
	printf("temp->data=%s\n", (char *)temp->data);
	temp = ft_list_at(node, 2);
	printf("temp->data=%s\n", (char *)temp->data);
	
	
	return (0);
}
