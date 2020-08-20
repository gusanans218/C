#include <stdio.h>
int main()
{
    int i, n;


    printf("숫자를 입력 : ");
    scanf_s("%d", &n);


    for (i = 2; i < n; i++)
    {
     
    if (n % i == 0)
            break;
    }


    if (i == n)
        printf("소수");
    else
        printf("합성수");


    return 0;
}