#include <stdio.h>
int main()
{
	int i, jum[5];//선언
    printf(" 5명의 점수를 입력 :");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &jum[i]);
	printf(" 거꾸로 출력 :  ");
	for (i = 4; i >= 0; i--)
		printf("%3d", jum[i]);
	return 0;
}