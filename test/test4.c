#include <stdio.h>
int main()
{
    int i, n, cnt;
    printf("╪Ж ют╥б:  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        cnt = i * 3;
        printf("%3d", cnt);
    }
}