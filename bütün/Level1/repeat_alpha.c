int main(int argc, char const *argv[])
{
    if(argc == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            int len = 1;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                len = argv[1][i] - 96;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                len = argv[1][i] - 64;
            while (len)
            {
                write(1, &argv[1][i], 1);
                len--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}


