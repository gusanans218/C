#include <stdio.h>
int main()
{
    int i, n;


    printf("���ڸ� �Է� : ");
    scanf_s("%d", &n);


    for (i = 2; i < n; i++)
    {
     
    if (n % i == 0)
            break;
    }


    if (i == n)
        printf("�Ҽ�");
    else
        printf("�ռ���");


    return 0;
}