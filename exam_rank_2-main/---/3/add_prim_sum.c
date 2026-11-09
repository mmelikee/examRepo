#include <unistd.h>
int	ft_atoi(char *s)
{
	int n = 0;

	while (*s >= '0' && *s <= '9')
		n = n * 10 + *s++ - '0';
	return n;
}

int	is_prime(int n)
{
	int i = 2;

	if (n < 2)
		return 0;
	while (i <= n / i)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int	main(int ac, char **av)
{
	int n = 0;
	int sum = 0;
	int i = 2;
	char c;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		while (i <= n)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
	}
	if (sum == 0 && ac == 2 && n == 0)
	{
		write(1, "0\n", 2);
		return 0;
	}
	if (ac != 2 || n <= 0)
		sum = 0;
	if (sum == 0)
	{
		write(1, "0\n", 2);
		return 0;
	}
	char buf[12];
	int j = 0;
	while (sum > 0)
	{
		buf[j++] = sum % 10 + '0';
		sum /= 10;
	}
	while (j--)
		write(1, &buf[j], 1);
	write(1, "\n", 1);
	return 0;
}