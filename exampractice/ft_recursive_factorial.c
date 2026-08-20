int ft_recursive_factorial(int nb)
{
	if (nb<0)
		return 0;
	if (nb == 0)
		return 1;
	if (nb == 1)
		return 1;
	return (nb * ft_recursive_factorial(nb-1));
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_recursive_factorial(-1)); //0
	printf("%d\n", ft_recursive_factorial(0)); //1
	printf("%d\n", ft_recursive_factorial(1)); //1 = 1
	printf("%d\n", ft_recursive_factorial(2)); //2 = 1*2
	printf("%d\n", ft_recursive_factorial(3)); //6 = 1*2*3
	return 0;
}
