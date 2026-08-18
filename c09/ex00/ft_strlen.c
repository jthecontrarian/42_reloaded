/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 11:38:04 by jelau             #+#    #+#             */
/*   Updated: 2026/08/07 12:10:47 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}

/*
#include <stdio.h>

int	main(void)
{	
	
	// this another way to declare and initialize a string
	//char	*mystr;
	//mystr = "skibidi";

	char mystr[] = "skibidi";

	int num;
	num = ft_strlen(mystr); //should return 7
	printf("%d", num);
	return (0);
}
*/
