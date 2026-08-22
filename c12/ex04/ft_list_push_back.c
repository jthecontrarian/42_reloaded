/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 21:46:31 by jelau             #+#    #+#             */
/*   Updated: 2026/08/22 21:46:33 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;
	t_list	*temp;

	node = ft_create_elem(data);
	if (*begin_list == NULL)
	{	
		*begin_list = node;
		return ((void)0);
	}
	temp = *begin_list;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = node;
}

/*
#include <stdio.h>

int main(void)
{
	// create linked list where: A -> B -> C -> NULL
	t_list *node;
	node = NULL;
	ft_list_push_back(&node, "A");
	ft_list_push_back(&node, "B");
	ft_list_push_back(&node, "C");

	t_list *temp;
	temp = node;
	while (temp != NULL)
	{
		printf("data=%s,", (char *)temp->data);
		printf("next=%p\n", temp->next);
		temp = temp->next;
	}
	return (0);
}
*/