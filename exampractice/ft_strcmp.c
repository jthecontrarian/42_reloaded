int ft_strcmp(char *a, char *b)
{
	while (*a && *b && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b); 
}

#include <stdio.h>

int main(void)
{
	printf("%d",ft_strcmp("aa","ac"));
	return (0);
}
