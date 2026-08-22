/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:53:48 by jelau             #+#    #+#             */
/*   Updated: 2026/08/22 12:53:51 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/*
int contains_e(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'e')
			return (1);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	char *array1[] = {"aaa","bbb","ccc"};
	printf("%d\n",ft_count_if(array1, 3, contains_e)); //0

	char *array2[] = {"aaa","bbb","cec"};
	printf("%d\n",ft_count_if(array2, 3, contains_e)); //1

	char *array3[] = {"e"};
	printf("%d\n",ft_count_if(array3, 1, contains_e)); //1

	char *array4[] = {""};
	printf("%d\n",ft_count_if(array4, 1, contains_e)); //0

	char *array5[] = {"aaa"};
	printf("%d\n",ft_count_if(array5, 1, contains_e)); //0	

	return (0);
}
*/