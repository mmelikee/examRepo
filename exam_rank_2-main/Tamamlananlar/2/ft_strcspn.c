#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *r)
{
    int i = 0;
    int j = 0;
    while(s[i])
    {
        j = 0;
        while (r[j])
        {
            if(s[i] == r[j])
                return(i);
            j++;
        }  
        i++;
    }
    return(i);
}