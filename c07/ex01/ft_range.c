/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 11:28:16 by jelau             #+#    #+#             */
/*   Updated: 2026/08/22 11:37:10 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	if (!array)
		return (NULL);

	i = 0;
	while (i < max - min)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*
#include <unistd.h>

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
	int min = 2;
	int max = 2;
	int i = 0;
	int *array = ft_range(min, max);

	while(i < max - min)
	{
		ft_putnbr(array[i]);
		ft_putchar(' ');
		i++;
	}
	return (0);
}
*/