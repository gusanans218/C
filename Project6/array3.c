#include <stdio.h>
int main()
{
	int i, jum[100], sum = 0, n;
	printf("우리반 학생 수 입력: ");
	scanf("%d", &n);
	printf("우리반 학생의 점수 입력 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &jum[1]);
		printf("%3d", jum[1]);
		sum = sum + jum[1];
	}
	printf("\n합계 : %d\n", sum);
	printf("평균 : %.2f\n", (float)sum / n);
}