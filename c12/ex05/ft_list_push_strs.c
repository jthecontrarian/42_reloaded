/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 01:28:53 by jelau             #+#    #+#             */
/*   Updated: 2026/08/23 01:28:56 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*node;
	t_list *temp;
	int	i;

	if (size == 0)
		return (NULL);
		
	i = 0;
	temp = NULL;
	while (i < size)
	{
		node = ft_create_elem(strs[i]);
		node->next = temp; 
		temp = node;
		i++;
	}
	return (node);
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
	t_list *node;
	char *strs[] = {"C","B","A"};
	node = ft_list_push_strs(3, strs);

	//also print out the original address
	printf("strs[0]=%s,&strs[0]=%p\n", strs[0], strs[0]);
	printf("strs[1]=%s,&strs[1]=%p\n", strs[1], strs[1]);
	printf("strs[2]=%s,&strs[2]=%p\n", strs[2], strs[2]);

	// print out linked list
	print_linked_list(node);
}
*/