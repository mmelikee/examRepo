#include <unistd.h>
int main(int ac, char **av)
{
    int i=0;
    char c;
    if(ac==2)
    {
        while(av[1][i])
        {
            if((c >= 64 && c <= 91)||(c >= 96 && c <= 123))
                c ^= 32;
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

