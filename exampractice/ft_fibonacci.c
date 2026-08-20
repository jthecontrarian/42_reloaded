int	ft_fibonacci(int i)
{
	if (i<0)
		return 0;
	if (i == 0)
		return 1;
	if (i == 1)
		return 1;
	return (ft_fibonacci(i-1) + ft_fibonacci(i-2));
}

#include <stdio.h>

int main(void)
{
	printf("%d", ft_fibonacci(-1)); //0
	printf("%d", ft_fibonacci(0)); //1
	printf("%d", ft_fibonacci(1)); //1
	printf("%d", ft_fibonacci(2)); //2
	printf("%d", ft_fibonacci(3));//3
	printf("%d", ft_fibonacci(4));//5
	return 0;
}
