/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 21:35:38 by jelau             #+#    #+#             */
/*   Updated: 2026/08/22 21:35:39 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	if (begin_list == NULL)
		return (NULL);

	while(begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}

/*
#include <stdio.h>

int main(void)
{
	// create linked list
	t_list *node;
	node = NULL;
	ft_list_push_front(&node, "C");
	ft_list_push_front(&node, "B");
	ft_list_push_front(&node, "A");

	// get last node
	t_list *last_node;
	last_node = ft_list_last(node);

	// print last node
	printf("%s\n", (char *)last_node->data);
	printf("%p\n", last_node->next);

	return (0);
}
*/