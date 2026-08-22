/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:07:26 by jelau             #+#    #+#             */
/*   Updated: 2026/08/22 12:07:28 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*array;
	int	i;

	array = malloc(sizeof(int) * (length));
	if (!array)
		return (NULL);
	i = 0;
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

/*
#include <unistd.h>

int multiply(int n)
{
	return (n * 2);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 0 && nb <= 9)
        ft_putchar(nb + '0');
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int main(void)
{
	int array[] = {1, 2, 3};
	int length = 3;
	int *array2;

	int i = 0;
	array2 = ft_map(array, length, multiply);
	while (i < length)
	{
		ft_putnbr(array2[i]);
		i++;
	}
	return (0);
}
*/
