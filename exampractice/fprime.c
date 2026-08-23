#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	// special cases
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	// print numbers
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void fprime(int nb)
{	
	if (nb == 1)
	{
		ft_putnbr(1);
		return (void)0;
	}	

	int i = 2;
	while (nb > 1)
	{
		if (nb % i == 0)
		{
			ft_putnbr(i);
			nb = nb / i;
			i--;
			if (nb != 1)
				write(1,"*",1);
		}
		i++;
	}
	write(1,"\n",1);
}

#include <stdio.h>

int main(void)
{
	// printf("%d\n", ft_is_prime(0)); //0
	// printf("%d\n", ft_is_prime(1)); //0
	// printf("%d\n", ft_is_prime(2)); //1
	// printf("%d\n", ft_is_prime(3)); //1
	// printf("%d\n", ft_is_prime(4)); //0
	// printf("%d\n", ft_is_prime(5)); //1	
	// printf("%d\n", ft_is_prime(6)); //0	
	// printf("%d\n", ft_is_prime(7)); //1	

	fprime(225225);
	fprime(8333325);
	fprime(7);
	fprime(1);


	return (0);
}