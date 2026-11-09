int	    is_power_of_2(unsigned int n)
{
    int result;
    if(n == 0)
        return(0);
    if(n == 1)
        return(1);
    while (n > 1)
    {
        if(n % 2 != 0)
            return(0);
        n = n / 2;
    }
    return(1);
    
}

#include <stdio.h>

int is_power_of_2(unsigned int n);

int main(void)
{
    printf("%d\n", is_power_of_2(33));
    return (0);
}