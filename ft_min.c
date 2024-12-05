int ft_min (int *list, unsigned int len)
{
    if (!list)
        return (-1);
    unsigned int i = 0;
    int min;
    int result = 0;
    min = list[0];
    while (i < len)
    {
        if (list[i] < min)
        {
            result = i;
            min = list[i];
        }
        i++;
    }
    return (result);
}