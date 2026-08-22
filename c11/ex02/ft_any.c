/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:07:35 by jelau             #+#    #+#             */
/*   Updated: 2026/08/22 12:07:39 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
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
	char *array1[] = {"aaa","bbb","ccc",NULL};
	printf("%d\n",ft_any(array1, contains_e)); //0

	char *array2[] = {"aaa","bbb","cec",NULL};
	printf("%d\n",ft_any(array2, contains_e)); //1

	char *array3[] = {NULL};
	printf("%d\n",ft_any(array3, contains_e)); //0

	char *array4[] = {"",NULL};
	printf("%d\n",ft_any(array4, contains_e)); //0

	char *array5[] = {" ",NULL};
	printf("%d\n",ft_any(array5, contains_e)); //0

	char *array6[] = {"aaa","",NULL};
	printf("%d\n",ft_any(array6, contains_e)); //0

	char *array7[] = {"e",NULL};
	printf("%d\n",ft_any(array7, contains_e)); //1

	char *array8[] = {"e","",NULL};
	printf("%d\n",ft_any(array8, contains_e)); //1
	return (0);
}
*/