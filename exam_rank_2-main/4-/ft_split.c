#include <stdlib.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	count_words(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		while (is_space(str[i]))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (count);
}

char	*ft_word(char *str, int len)
{
	char	*word;
	int		i = 0;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**result;
	int		i = 0;
	int		j = 0;
	int		start;

	result = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		while (is_space(str[i]))
			i++;
		if (str[i])
		{
			start = i;
			while (str[i] && !is_space(str[i]))
				i++;
			result[j] = ft_word(str + start, i - start);
			if (!result[j])
				return (NULL);
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}