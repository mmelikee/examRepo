int		max(int* tab, unsigned int len)
{
    int i = 0;
    int res ;
    if(len == 0)
        return(0);
    if(len > 0)
        res = tab[0];
    while (len > i)
    {
        if(res < tab[i])
            res = tab[i];
        i++;
    }
    
    return(res);
}

#include <stdio.h>

int max(int *tab, unsigned int len);

int main(void)
{
    int tab1[] = {1, 5, 3, 9, 2};
    int tab2[] = {-5, -2, -10};
    int tab3[] = {-8, 0, -3};
    int tab4[] = {-100, -50};

    printf("%d\n", max(tab1, 5)); // 9
    printf("%d\n", max(tab2, 3)); // -2
    printf("%d\n", max(tab3, 3)); // 0
    printf("%d\n", max(tab4, 2)); // -50
    printf("%d\n", max(NULL, 0)); // 0

    return (0);
}