int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return 0;
	return(s1[i] - s2[i]);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_strncmp("abc","abcd",3));
	return 0;
}
