// PISCINE EXAM ATOI

int ft_atoi(char *str)
{
	int	value;
	int	i;
	int	sign = 1;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;

	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (sign * value);
}

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("%d\n", atoi("   -1+42b2"));
	printf("%d\n", ft_atoi("   -1+42b2")); // 0
	return (0);
}
