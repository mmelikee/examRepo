char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int b = 0;
    char **ary = (char **)malloc(1000);
    while(str[i])
    {
        while(str[i] == ' '|| str[i] == '\t')
            i++;
        if(str[i] == '\0')
            break;
        ary[b] = (char *)malloc(1000);
        while(str[i] && str[i] != ' ' && str[i] != '\t')
        {
            ary[b][j] = str[i];
            i++;
            j++;
        }
        ary[b][j] = '\0';
        j = 0;
        b++;
    }
    ary[b] = '\0';
    return(ary);
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int b = 0;
    char **ary = (char **)malloc(1000);
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == ' \t')
            i++;
        if (str[i] == '\0')
            break;
        ary[b] = (char *)malloc(1000);
        while (str[i] && str[i] != ' ' && str[i] != '\t')
        {
            ary[b][j] = str[i];
            i++;
            j++;
        }
        ary[b][j] = '\0';
        j = 0;
        b++;
    }
    ary[b] = '\0';
    return(ary);
}
char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int b = 0;
    char **ary = (char **)malloc(1000);
    while(str[i])
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        if(str[i] == '\0')
            break;
        ary[b] == (char *)malloc(1000);
        while(str[i] && str[i] != ' ' && str[i] != '\t')
        {
            ary[b][j] = str[i];
            i++;
            j++;
        }
        ary[b][j] = '\0';
        j = 0;
        b++;
    }
    ary[b] = '\0';
    return(ary);
}