/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 21:19:36 by jelau             #+#    #+#             */
/*   Updated: 2026/08/22 21:19:37 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while(begin_list != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
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

int main(void)
{
	t_list *node;

	node = NULL;
	
	ft_list_push_front(&node, "C");
	ft_list_push_front(&node, "B");
	ft_list_push_front(&node, "A");
	printf("%d\n", ft_list_size(node));
	return (0);
}
*/