#include <stdio.h>
int main()
{
	//우리반 5명의 점수의 합, 평균
	int num[5] = { 45, 96, 88, 23, 99 };
	int i, s = 0, max = 0, min=100;
	/*for (i = 0; i < 5; i++)
		scanf("%d", &num[1]);*/
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
		printf("%3d", num[i]);
		s = s + num[i];
		if (max < num[i])
			max = num[i];
		if (min > num[i])
		min = num[i];
	}
	printf("\n");
	printf("합 : %d\n", s);
	printf("평균 : %2f\n", (float)s / 5.0);
	printf("최대값 : %d\n", max);
	printf("최소값 : %d\n", min);

	


	return 0;
}