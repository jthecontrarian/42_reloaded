/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 17:31:57 by jelau             #+#    #+#             */
/*   Updated: 2026/08/23 17:31:59 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temp;

	while (begin_list != NULL)
	{
		temp = begin_list->next;
		free_fct(begin_list->data);
		free(begin_list);
		begin_list = temp;
	}
}

#include <stdio.h>

void	free_fct(void *data)
{
	free(data);
}

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
	if (node == NULL)
	{
		printf("argument is NULL.");
		return ((void)0);
	}
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
	// create linked list where: A -> B -> C -> NULL where the data is malloc'ed
	t_list *node;
	char	*a;
	char	*b;
	char	*c;
	a = malloc(sizeof(char) * (1 + 1));
	b = malloc(sizeof(char) * (1 + 1));
	c = malloc(sizeof(char) * (1 + 1));
	a[0] = 'A';
	a[1] = '\0';
	b[0] = 'B';
	b[1] = '\0';
	c[0] = 'C';
	c[1] = '\0';	
	node = NULL;
	ft_list_push_front(&node, c);
	ft_list_push_front(&node, b);
	ft_list_push_front(&node, a);

	// print out linked list
	print_linked_list(node);
	
	// delete linked list
	ft_list_clear(node, free_fct);
	
	return (0);
}
