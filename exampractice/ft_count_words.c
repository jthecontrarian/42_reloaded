int is_delim(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int	ft_count_words(char *str)
{
	int i;

	// skip front
	i = 0;
	while(str[i] != '\0' && is_delim(str[i]))
		i++;
	if (str[i] == '\0')
		return (0);

	// main loop
	int in_word = 1;
	int count = 1;
	while(str[i] != '\0')
	{
		if(!is_delim(str[i]) && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		if(is_delim(str[i]) && in_word == 1)
		{
			in_word = 0;
		} 	
		i++;
	}

	return (count);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_count_words("  aa  bb     cc ")); //2
	return (0);
}