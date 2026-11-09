char	*ft_strcpy(char	*s1, char *s2)
{
	int i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	return(s1);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char s1[12] = "mel";
	char s2[]= "ike";

	printf("%s", ft_strcpy(s1, s2));
	
	return 0;
}
