#include <stdio.h>
int main()
{
    int i=1, s= 0;
    while (s < 10000)
    {
        s = s + i;
        i++;
    }
    printf("%d %d\n", s - i + 1, i - 2);
}



//i = 0;
//printf(" �� �Է� : ");
//scanf("%d", n);
//for (a = 1;;a++)
//{
//    i += a;
//    if (i >= 10000)
//        break;
//}
//printf("1���� %d������ ���� %d�Դϴ�.\n", a - 1, i - a);
//return 0;