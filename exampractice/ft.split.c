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

// char	**ft_split(char *str)
// {
// 	char *array[];
// 	int i;
// 	int len;

// 	len = 0
// 	i = 0;
// 	while(str[i] != '\0')
// 	{
// 		if(!is_delim(str[i]))
// 			len++;
// 	}

// 	array = malloc(sizeof(char *) * (count_substring(str) + 1))
// 	if (!array)
// 		return (NULL);
// 	i = 0;
// 	while(str[i] != '\0')
// 	{




// 		i++;
// 	}
// 	array[i] = NULL;
// 	return (array);
// }

#include <stdio.h>

int main(void)
{
	printf("%d\n", count_substring("aaa bbb\nccc"));
	// char *str;
	// str = "aaa bbb\tbbb\nddd"
	// ft_split()
	// return (0);
}