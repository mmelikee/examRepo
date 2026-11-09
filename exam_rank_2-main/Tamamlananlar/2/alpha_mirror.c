#include <unistd.h>
int main(int ac, char **av)
{
    if(ac==2)
    {
        int i=0; char c;
        while((c=av[1][i]))
        {
            if(c >= 'a' && c <= 'z') c = 'm' - (c-'n'); //(c = 219-c)
            else if(c >= 'A' && c <= 'Z') c = 'M' - (c-'N'); // (c = 155-c)
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
