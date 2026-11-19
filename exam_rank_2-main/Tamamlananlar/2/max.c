#include <stdio.h>

int max(int *tab, unsigned int len)
{
    unsigned int j = 1;
    int i;

    if (len == 0)
        return 0;

    i = tab[0];

    while (j < len)
    {
        if (i < tab[j])
            i = tab[j];
        j++;
    }
    return (i);
}

int main(void)
{
    int tab[] = {5, 12, 3, 20, 8};
    int tab2[] = {-10, -3, -25, -1};
    int tab3[] = {42};

    printf("Test 1: %d\n", max(tab, 5));
    printf("Test 2: %d\n", max(tab2, 4));
    printf("Test 3: %d\n", max(tab3, 1));
    printf("Test 4: %d\n", max(tab, 0));

    return (0);
}