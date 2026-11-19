unsigned char reverse_bits(unsigned char octet)
{
    int i = 8;
    char result = 0;
    while (i--)
    {
        result = (result<<1) | (octet & 1);
        octet >>= 1;
    }
    return(result);
}