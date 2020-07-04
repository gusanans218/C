#include <stdio.h>
int main()
{
    int i, n, m, l, k;
    do 
    {
        printf("¼ö ÀÔ·Â: ");
        scanf_s("%d", &i);
        if (i >= 0)
            break;
    } 
    while (1);
    n = (i / 1000) % 10;
    m = (i / 100) % 10;
    l = (i / 10) % 10;
    k = i % 10;
    printf("%d%d%d%d\n", k, l, m, n);
    return 0;
}