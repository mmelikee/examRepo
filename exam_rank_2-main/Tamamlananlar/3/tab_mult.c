#include <unistd.h>
void	ft_putnbr(int n)
{
    if(n>9) ft_putnbr(n/10); char c=n%10+'0'; write(1, &c, 1);
}
int main(int ac, char **av)
{
	int i;
	int n=1;
	if(ac==2)
	{
		i=0;
		while(av[1][i])
		{
			i=i*10+av[1][i]-'0';
			i++;
		}
		while(n <= 9)
		{
			ft_putnbr(n);
			write(1, " x ", 3);
			ft_putnbr(i);
			write(1, " = ", 3);
			ft_putnbr(i*n);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}

