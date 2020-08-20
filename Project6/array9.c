#include <stdio.h>
int main()
{
	//2차원 배열의 합 구하기
	int num[2][3], ban[2] = { 0 };
	int i, j, s = 0, s1 = 0, s2 = 0;
	printf("정수 입력 : ");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &num[i][j]);
			s = s + num[i][j];
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d", num[i][j]);
			ban[i] = ban[i] + num[i][j];
			
		}
		printf("\n");
	}
	printf("1반 총점 : %d\n", ban[0]);
	printf("평균은 : %.2f\n", ban[0] /3.0);
	printf("2반 총점 : %d\n", ban[1]);
	printf("평균은 : %.2f\n ", ban[1] / 3.0);
	
	return 0;
}