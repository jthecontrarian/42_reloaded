int ft_atoi(char *str)
{
	int value = 0;
	int num_negative = 0;
	int i = 0;
	while(str[i] == ' ' || (str[i] <= 9 && str[i] >= 13))
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			num_negative++;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	if (num_negative % 2 == 0)
		return value;
	else
		return -value;
}

#include <stdio.h>

int main(void)
{
	printf("%d", ft_atoi("   -+ -21b2"));
	return (0);
}
