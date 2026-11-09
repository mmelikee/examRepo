#include <unistd.h>
void    ft_putnbr(int n)
{
    if(n>9) ft_putnbr(n/10); char c=n%10+'0'; write(1, &c, 1);
}
int main()
{
    for(int i=1; i<=100; i++)
    {
        if(i%15==0) write(1, "fizzbuzz\n", 9);
        else if(i%3==0) write(1, "fizz\n", 5);
        else if(i%5==0) write(1, "buzz\n", 5);
        else { ft_putnbr (i); write(1, "\n", 1);}
    }
    return 0;
}