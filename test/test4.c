#include <stdio.h>
int main()
{
    int i, n, cnt;
    printf("�� �Է�:  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        cnt = i * 3;
        printf("%3d", cnt);
    }
}