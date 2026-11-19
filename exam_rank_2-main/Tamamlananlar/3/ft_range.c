#include <stdlib.h>
int	*ft_range(int start, int end)
{
    int i;
	int size;
	int	*res;
	int	step;
	size = abs(end -start)+1;
    res = malloc(sizeof(int)*size);
	if (!res)
		return (NULL);
	step = (start <= end) ? 1 : -1;
	i = 0;
	while (i < size)
	{
		res[i] = start;
		start += step;
		i++;
	}
	return res;
}