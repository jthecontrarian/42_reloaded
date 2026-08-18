/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:12:14 by jelau             #+#    #+#             */
/*   Updated: 2026/08/18 22:38:20 by jelau            ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*empty(void)
{
	char	*result;

	result = malloc(sizeof(char) * 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

int	copy(char *dest, char *src)
{
	ft_strcpy(dest, src);
	return (ft_strlen(src));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		n;
	char	*result;

	if (size == 0)
		return (empty());
	n = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
		n += ft_strlen(strs[i++]);
	result = malloc(sizeof(char) * (n + 1));
	if (!result)
		return (NULL);
	i = 0;
	n = 0;
	while (i < size)
	{
		n += copy(result + n, strs[i]);
		if (i < size - 1)
		{
			n += copy(result + n, sep);
		}
		i++;
	}
	return (result);
}

#include <stdio.h>

int main()
{
    int size = 0;
    char *strs[] = {"aaa","bbb","ccc"};
    char *sep = "";
    char *result = ft_strjoin(size, strs, sep);
    printf("%s", result);
    free(result);
    return (0);
}
