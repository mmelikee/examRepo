#include <stdlib.h>
int basamak(int a)
{
    int i = 0;
    if(a < 0)
    {
        a = a * -1;
        i++;
    }
    while(a > 9)
    {
        a = a / 10;
        i++;
    }
    return(i + 1);
}

char *ft_itoa(int nbr)
{
    char *res;
    int i = basamak(nbr);
    res = malloc(i + 1);
    if(nbr == 0)
        res[0] = '0';
    res[i] = '\0';
    if(nbr < 0)
    {
        res[0] = '-';
        nbr = nbr * -1;
    }
    i--;
    while(nbr > 0)
    {
        res[i] = (nbr % 10) + '0';
        nbr = nbr / 10;
        i--;
    }
    return(res);
}

int basamak(int a)
{
    int i = 0;
    if(a < 0)
    {
        a = a * -1;
        i++;
    }
    while(a > 9)
    {
        a = a / 10;
        i++;
    }
    return(i + 1);
}

char *ft_itoa(int nbr)
{
    char*res;
    int i = basamak(nbr);
    res = malloc(i + 1);
    if(nbr == 0)
        res[0] = '0';
    res[i] = '\0';
    if(nbr < 0)
    {
        res[0] = '-';
        nbr = nbr * -1; 
    }
    i--;
    while (nbr > 0)
    {
        res[i] = (nbr % 10) + '0';
        nbr = nbr / 10;
        i--;
    }
    return(res);
}


int basamak(int a)
{
    int i = 0;
    if(a < 0)
    {
        a = a * -1;
        i++;
    }
    while(a > 0)
    {
        a = a / 10;
        i++;
    }
    return(i + 1);
}

char *ft_itoa(int nbr)
{
    char *res;
    int i = basamak(nbr);
    res = malloc(i + 1);
    if(nbr == 0)
        res[0] = '0';
    res[i] = '\0';
    if(nbr < 0)
    {
        res[0] = '-';
        nbr == nbr * -1;
    }
    i--;
    while(nbr > 0)
    {
        res[i] = (nbr % 10) + '0';
        nbr = nbr / 10;
        i--;
    }
    return(res);
}

int basamak(int a)
{
    int i = 0;
    if(a < 0)
    {
        a = a * -1;
        i++;
    }
    while (a > 0)
    {
        a = a / 10;
        i++;
    }
    return(i + 1);
    
}
char *ft_itoa(int nbr)
{
    char *res;
    int i = basamak(nbr);
    res = malloc(i + 1);
    if(nbr == 0)
        res[0] = '0';
    res[i] = '\0';
    if(nbr < 0)
    {
        res[0] = '-';
        nbr = nbr * -1;
    }
    i--;
    while (nbr > 0)
    {
        res[i] = (nbr % 10) + '0';
        nbr = nbr / 10;
        i--;
    }
    return(res);
}