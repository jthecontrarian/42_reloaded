#include <stdlib.h>

 char	*ft_strdup(char *src)
{
	int	i;
	char *dest;

	i = 0;
	while(src[i])
		i++;
	
	dest = malloc(sizeof(char) * (i + 1));
	
	if (dest == NULL)
		return (NULL);

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}

#include <stdio.h>

int main(void)
{
	char mystr[] = "Skibidi";
	
	char *mycopy = ft_strdup(mystr);
	
	if (mycopy == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}
	
	printf("%s, %p\n",mycopy, (void *)mycopy);
	printf("%s, %p\n", mystr, (void *)mystr);	

	return (0);
}
