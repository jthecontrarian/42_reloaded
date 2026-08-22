/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 13:32:34 by jelau             #+#    #+#             */
/*   Updated: 2026/08/22 13:43:15 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

/*
t_list	*ft_create_elem(void *data);
void ft_list_push_front(t_list **begin_list, void *data);
*/

#endif