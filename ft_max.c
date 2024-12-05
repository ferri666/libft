int ft_max (int *list, unsigned int len)
{
    if (!list)
        return (-1);
    unsigned int i = 0;
    int max;
    int result = 0;
    max = list[0];
    while (i < len)
    {
        if (list[i] > max)
        {
            result = i;
            max = list[i];
        }
        i++;
    }
    return (result);
}