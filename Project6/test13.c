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
//printf(" 수 입력 : ");
//scanf("%d", n);
//for (a = 1;;a++)
//{
//    i += a;
//    if (i >= 10000)
//        break;
//}
//printf("1부터 %d까지의 합이 %d입니다.\n", a - 1, i - a);
//return 0;