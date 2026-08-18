/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 14:37:49 by jelau             #+#    #+#             */
/*   Updated: 2026/08/18 15:43:59 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		n;
	char	*result;

	i = 0;
	n = 0;
	while (i < size)
	{
		n += ft_strlen(strs[i]);
		i++;
	}
	n += ft_strlen(sep) * (size - 1);
	result = malloc(sizeof(char) * (n + 1));
	if (!result)
		return (NULL);
	i = 0;
	n = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result[n] = strs[i][j];
			j++;
			n++;
		}
		j = 0;
		while (1 < size - 1 && sep[j] != '\0')
		{
			result[n] = sep[j];
			j++;
			n++;
		}
		i++;
	}
	result[n] = '\0';
	return (result);
}

/*
#include <stdio.h>

int main()
{
    int size = 3;
    char *strs[] = {"aaa", "bbb", "ccc"};
    char *sep = "00";
    char *result = ft_strjoin(3, strs, sep);
    printf("%s", result);
    free(result);
    return (0);
}
*/
