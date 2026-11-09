unsigned char reverse_bits(unsigned char octet)
{
    int i=8;
    char r=0;
    while(i--)
    {
        r=(r<<1)|(octet & 1);
        octet >>= 1;
    }
    return r;
}