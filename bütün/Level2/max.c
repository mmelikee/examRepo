int max(int *tab, unsigned int len)
{
    unsigned int j;
    int i;

    if (len == 0)
        return 0;

    i = tab[0];
    j = 1;
    while (j < len)
    {
        if (i < tab[j])
            i = tab[j];
        j++;
    }
    return (i);
}

int max(int *tab, unsigned int len)
{
    unsigned int j;
    int i;
    if(len == 0)
        return 0;
    
    i = tab[0];
    j = 1;
    while (j < tab[j])
    {
        if(i < tab[j])
            i = tab[j];
        j++;
    }
    return (i);
}