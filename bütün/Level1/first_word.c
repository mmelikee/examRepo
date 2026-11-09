#include <unistd.h>
int main(int ac, char **av)
{
	if(ac == 2)
	{
		char *str = av[1];
		int i = 0;
		while (str[i])
		{
			while (str[i] == ' ')
				i++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				write(1, &str[i], 1);
				i++;
			}
			if(str[i] == ' ' || str[i] == '\0')
				break;
			i++;
		}
	}
	write(1, "\n", 1);
}
