#include <stdlib.h>

int is_delim(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0); 
}

int count_substring(char *str)
{
	int i;
	int count;
	int inside_word;

	i = 0;
	count = 0;
	inside_word = 0;
	while(str[i] != '\0')
	{
		if (is_delim(str[i]))
			inside_word = 0;
		else if (inside_word == 0)
		{
			count++;
			inside_word = 1;
		}
		i++;
	}
	return (count);
}

char *get_substring(char *str, int start_i, int end_i)
{
	int j;
	char *result;

	result = malloc(sizeof(char) * ((end_i - start_i) + 1));
	if (!result)
		return (NULL);

	j = 0;
	while(j < end_i - start_i)
	{
		result[j] = str[start_i + j];
		j++;
	}
	result[j] = '\0';
	return (result);
} 

char	**ft_split(char *str)
{
	char **array;
	int i;
	int old_i;
	int index;

	array = malloc(sizeof(char *) * (count_substring(str) + 1));
	if (!array)
		return (NULL);
	
	i = 0;
	old_i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_delim(str[i]))
			i++;
		if (str[i] == '\0')
			break ;

		old_i = i;
		while (str[i] != '\0' && !is_delim(str[i]))
			i++;
		
		array[index] = get_substring(str, old_i, i);
		if (!array[index])
			return (NULL);
		index++;
	}
	array[index] = NULL;
	return (array);
}

#include <stdio.h>

int main(void)
{
	// printf("%d\n", count_substring("aaa bbb\nccc"));
	// printf("%s\n", get_substring("aaabbbccc", 3, 6));
	char **mystr;
	mystr = ft_split("aaa bbb\tccc\n");
	printf("{%s, %s, %s, %s}\n", mystr[0], mystr[1], mystr[2], mystr[3]);
	return (0);
}