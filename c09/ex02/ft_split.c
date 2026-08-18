/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 23:23:01 by jelau             #+#    #+#             */
/*   Updated: 2026/08/18 23:23:02 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Create a function that splits a string, using each character from the charset string
as a separator.
• You will need to use each character from the charset string individually as a
separator.
• The function should return an array where each element contains the address of a
substring wrapped between two separators. The last element of the array should
be NULL to indicate the end of the array.
• There should be no empty strings in your array. Draw your conclusions accordingly.
• The string provided as an argument cannot be modified.

suppose 


*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i] != '\0')
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char **ft_split(char *str, char *charset);
{
	int		i;
	int		len;
	char	*array[];

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] not in charset) //////////////////// 
		len++;
	}

	array = malloc(sizeof(char) * (len + 1));

	i = 0;
	while (i < len)
	{
		// insert the things you want
		// have to loop through each "substring"
	}
	//array[i] = NULL; //last element
	return (array);
}

#include <stdio.h>

int	main(void)
{
	char **result = ft_split("aaa0bbb0ccc","01");
	printf("{%s,%s,%s}", result[0], result[1], result[2], result[3]); // {aaa, bbb, ccc, NULL}
	char **result = ft_split("aaa0bbb1ccc","01");
	printf("{%s,%s,%s}", result[0], result[1], result[2], result[3]); // {aaa, bbb, ccc, NULL}
	char **result = ft_split("aaa00bbb0ccc","0");
	printf("{%s,%s,%s}", result[0], result[1], result[2], result[3]); // {aaa, bbb, ccc, NULL}
	char **result = ft_split("aaa0bbb0ccc0","0");
	printf("{%s,%s,%s}", result[0], result[1], result[2], result[3]); // {aaa, bbb, ccc, NULL}
	char **result = ft_split("0aaa0bbb0ccc","0");
	printf("{%s,%s,%s}", result[0], result[1], result[2], result[3]); // {aaa, bbb, ccc, NULL}
	return (0);
}