#include <stdlib.h>
int	ft_len(long n)
{
	int	l=0;
	if (n <= 0)
		l++;
	while (n)
	{
		l++;
		n /= 10;
	}
	return l;
}
char	*ft_itoa(int nbr)
{
	char	*str;
	long	n=nbr;
	int		len;
	len = ft_len(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[--len] = '0';
	if (n < 0)
		n = -n;
	while (n)
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	if (nbr < 0)
		str[0] = '-';
	return (str);
}