/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 23:23:01 by jelau             #+#    #+#             */
/*   Updated: 2026/08/20 16:26:02 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
	Description: 
		Check if c is a seprator by referencing charset.

	Return:
		Return 1 if c is inside charset, otherwise 0.
*/
int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

/*
	Description: 
		Counts the number of substrings with charset as separator.
	
	Return:
		int number of substring.

	Example: 
		if *str="aaa0bbb0ccc", *charset="01", then return 3.
*/
int	count_substrings(char *str, char *charset)
{
	int	i;
	int	len;
	int	pos;

	i = 0;
	len = 0;
	pos = 0;
	while (str[i] != '\0')
	{
		if (is_separator(str[i], charset))
		{
			if (i != pos)
				len++;
			pos = i + 1;
		}
		i++;
	}
	if (i != pos)
		len++;
	return (len);
}

/*
	Description: 
		return a malloc'ed substring given a string, the starting and 
		ending index (exclusive of the ending index)

	Example:
		suppose str = "aaabbbccc", start_i=3,end_i=5, it returns "bb" 
		(not inclusive of the end_i element)
*/
char	*get_substring(char *str, int start_i, int end_i)
{
	char	*result;
	int		i;
	int		j;

	result = malloc(sizeof(char) * ((end_i - start_i) + 1));
	if (!result)
		return (NULL);
	j = 0;
	i = 0;
	while (j < end_i - start_i)
	{
		result[j] = str[start_i + i];
		j++;
		i++;
	}
	result[j] = '\0';
	return (result);
}

/*
	for the main loop, it consist of three parts
	first while loop and if condition: to deal with separators at the front.
	middle while loop: to determine the length of substring
*/
char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;
	int		j;
	int		old_i;

	array = malloc(sizeof(char *) * (count_substrings(str, charset) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_separator(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		old_i = i;
		while (str[i] != '\0' && !is_separator(str[i], charset))
			i++;
		array[j++] = get_substring(str, old_i, i);
		if (!array[j])
			return (NULL);
	}
	array[j] = NULL;
	return (array);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("\nis_separator() test\n");
	printf("%d\n", is_separator('a',"01")); // 0
	printf("%d\n", is_separator('0',"01")); // 1
	printf("%d\n", is_separator('1',"01")); // 1

	printf("\ncount_substrings() test\n");
	printf("%d\n", count_substrings("aaa0bbb0ccc","01")); // 3
	printf("%d\n", count_substrings("aaa00ccc","01")); // 2
	printf("%d\n", count_substrings("aaa01ccc","01")); // 2
	printf("%d\n", count_substrings("aaa","01")); // 1
	printf("%d\n", count_substrings("00aaa","01")); // 1
	printf("%d\n", count_substrings("aaa00","01")); // 1
	printf("%d\n", count_substrings("00","01")); // 0
	printf("%d\n", count_substrings("","01")); // 0
	
	printf("\nget_substring() test\n");
	printf("%s\n", get_substring("aaabbbccc", 3, 6)); // "bbbb"
	printf("%s\n", get_substring("aaabbbccc", 0, 0)); // "" or '\0'
	printf("%s\n", get_substring("aaabbbccc", 0, 1)); // "a"
	
	printf("\nft_split() test\n");
	char **result;
	result = ft_split("aaa0bbb1ccc","01");  // {aaa, bbb, ccc, NULL}
	printf("{%s,%s,%s,%s}\n", result[0], result[1], result[2], result[3]);
	result = ft_split("aaa0bbb1ccc","01"); // {aaa, bbb, ccc, NULL}
	printf("{%s,%s,%s,%s}\n", result[0], result[1], result[2], result[3]); 
	result = ft_split("aaa00bbb0ccc","0"); // {aaa, bbb, ccc, NULL}
	printf("{%s,%s,%s,%s}\n", result[0], result[1], result[2], result[3]); 
	result = ft_split("aaa0bbb0ccc0","0"); // {aaa, bbb, ccc, NULL}
	printf("{%s,%s,%s,%s}\n", result[0], result[1], result[2], result[3]); 
	result = ft_split("0aaa0bbb0ccc","0"); // {aaa, bbb, ccc, NULL}
	printf("{%s,%s,%s,%s}\n", result[0], result[1], result[2], result[3]);
	result = ft_split("00","0");
	printf("{%s}\n", result[0]); // {NULL}
		result = ft_split("010","01");
	printf("{%s}\n", result[0]); // {NULL}
	result = ft_split("","0");
	printf("{%s}\n", result[0]); // {NULL}

	return (0);
}
*/