/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 13:31:01 by jelau             #+#    #+#             */
/*   Updated: 2026/08/22 13:49:23 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

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

/*
#include <stdio.h>

int main(void)
{
	t_list *node;
	char *str;
	str = "aaa";

	node = ft_create_elem(str);
	if (!node)
		return(1);

	printf("%s\n", (char *)node->data);
	printf("%p\n", node->next);
	
	free(node);
	return (0);
}
*/