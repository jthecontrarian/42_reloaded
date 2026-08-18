/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 13:20:07 by jelau             #+#    #+#             */
/*   Updated: 2026/08/18 13:20:16 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *array;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    array = malloc(sizeof(int) * (max - min));
    if (!array)
    {
        *range = NULL;
        return (-1);
    }
    i = 0;
    while (i < max - min)
    {
        array[i] = min + i;
        i++;
    }
    *range = array;
    return (max - min);
    
}

/*
#include <stdio.h>

int main()
{
    int *myrange;
    printf("%d", ft_ultimate_range(&myrange, -2, 2));
    free(myrange);
    return (0);
}
*/