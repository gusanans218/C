#include <stdio.h>
int main()
{
	//2���� �迭�� �� ���ϱ�
	int num[2][3], ban[2] = { 0 };
	int i, j, s = 0, s1 = 0, s2 = 0;
	printf("���� �Է� : ");
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
	printf("1�� ���� : %d\n", ban[0]);
	printf("����� : %.2f\n", ban[0] /3.0);
	printf("2�� ���� : %d\n", ban[1]);
	printf("����� : %.2f\n ", ban[1] / 3.0);
	
	return 0;
}