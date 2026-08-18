/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:36:26 by jelau             #+#    #+#             */
/*   Updated: 2026/08/13 15:10:45 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\n", strcmp("abcd", "abcd")); //0
	printf("%d\n", strcmp("", "")); //0

	printf("%d\n", strcmp("abcz", "abcd")); //1
	printf("%d\n", strcmp("abcd", "abcz")); //-1

	printf("%d\n", strcmp("abcd", "abc")); //1
	printf("%d\n", strcmp("abc", "abcd")); //-1

	printf("%d\n", strcmp("z", ""));

	printf("\n");

	printf("%d\n", ft_strcmp("abcd", "abcd")); //0 
    printf("%d\n", ft_strcmp("", "")); //0 

    printf("%d\n", ft_strcmp("abcz", "abcd")); //1 
    printf("%d\n", ft_strcmp("abcd", "abcz")); //-1

    printf("%d\n", ft_strcmp("abcd", "abc")); //1 
    printf("%d\n", ft_strcmp("abc", "abcd")); //-1
	
	printf("%d\n", ft_strcmp("z", "")); 

	return (0);
}
*/
