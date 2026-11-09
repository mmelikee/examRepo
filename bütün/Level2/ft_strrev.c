#include <stdio.h>
char *ft_strrev(char *str)
{
    int i = 0;
    int x = 0;
    
    while(str[i])
        i++;
    char j[i];
    i--;
    while(i >= 0)
    {
        j[x] = str[i];
        i--;
        x++;
    }
    str = j;
    return(str);
}

int main()
{
    char a[] = "melike";
    char *n;
    n = ft_strrev(a);
    printf("%s", ft_strrev(a));
    return(0);
}