#include <unistd.h>
int	main(int ac, char **av)
{
	int i;
	int j;
	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				if (av[i][j] >= 'A' && av[i][j] <= 'Z')
					av[i][j] += 32;
				if ((j == 0 || av[i][j - 1] == ' ' || av[i][j - 1] == '\t')&& av[i][j] >= 'a' && av[i][j] <= 'z')
						av[i][j] -= 32;
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}