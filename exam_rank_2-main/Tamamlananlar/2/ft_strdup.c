#include <stdlib.h>
char *ft_strdup(const char *src)
{
    int i=0; 
    while(src[i]) 
        i++;
    char *dup=malloc(i+1); 
    if(!dup) 
        return NULL;
    i=0; 
    while(src[i])
    {
        dup[i]=src[i];
        i++;
    }
    dup[i]='\0'; 
    return dup;
}