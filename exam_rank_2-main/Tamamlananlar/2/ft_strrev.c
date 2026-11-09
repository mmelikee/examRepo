char *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char t;
    while (str[j])
        j++;
    j--;
    while (i < j)
    {
        t = str[i];
        str[i] = str[j];
        str[j] = t;
        i++;
        j--;
    }
    return str;
}