/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:54:08 by jelau             #+#    #+#             */
/*   Updated: 2026/08/22 12:54:09 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (length == 0 || length == 1)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int subtract(int a, int b)
{
    return (a - b);
}

int main(void)
{
	int array1[] = {1,2,3};
	printf("%d\n",ft_is_sort(array1, 3, subtract)); //1
	
	int array2[] = {3,2,1};
	printf("%d\n",ft_is_sort(array2, 3, subtract)); //0

	int array3[] = {2,1,3};
	printf("%d\n",ft_is_sort(array3, 3, subtract)); //0

	int array4[] = {1};
	printf("%d\n",ft_is_sort(array4, 1, subtract)); //1

	int array5[] = {0};
	printf("%d\n",ft_is_sort(array5, 1, subtract )); //1

	int array6[] = {};
	printf("%d\n",ft_is_sort(array6, 0, subtract )); //1

	int array7[] = {2,5,9};
	printf("%d\n",ft_is_sort(array7, 3, subtract)); //1

	int array8[] = {2,4,4};
	printf("%d\n",ft_is_sort(array8, 3, subtract)); //1

	return (0);
}
*/