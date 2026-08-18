/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 18:15:39 by jelau             #+#    #+#             */
/*   Updated: 2026/08/18 18:16:10 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	char *str;

	i = 0;
	while(src[i] != '\0')
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while(src[i] != '\0')
	{
		str[i]=src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}


struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*p;
	int			i;
	int			j;
	p = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!p)
		return (NULL);

	i = 0;
	while (i < ac)
	{	
		j = 0;
		while (av[i][j] != '\0')
			j++;
		p[i].size = j;
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		i++;
	}
	p[i].str = NULL;

	return (p);
}


