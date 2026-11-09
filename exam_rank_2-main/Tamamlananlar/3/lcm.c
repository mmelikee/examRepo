unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int x = a;
	unsigned int y = b;
    unsigned int tmp;
	if (!a || !b)
		return 0;
	while (y)
	{
		tmp = y;
		y = x % y;
		x = tmp;
	}
	return (a / x * b);
}
