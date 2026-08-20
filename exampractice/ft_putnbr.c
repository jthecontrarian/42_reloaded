#include <unistd.h>
#include <stdio.h>
#include <limits.h>
void ft_putnbr(int nb)
{
	char str[20];
	int i;
	if (nb == -2147483648)
	{
		write(1,"-2147483648",11);
		return ;
	}
	if (nb == 0)
	{
		write(1,"0",1);
		return ;
	}
	if (nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
	}



	i = 0;	
	while (nb>0)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
		//printf("i=%d\n",i);
	}
	//printf("str=%s\n", str);
	while (i >= 0)
	{
		write(1,&str[i],1);
		i--;
	}
}

#include <stdio.h>
int main (void)
{
	ft_putnbr(123);
	ft_putnbr(-123);
	ft_putnbr(0);
	return 0;
}
