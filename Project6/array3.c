#include <stdio.h>
int main()
{
	int i, jum[100], sum = 0, n;
	printf("�츮�� �л� �� �Է�: ");
	scanf("%d", &n);
	printf("�츮�� �л��� ���� �Է� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &jum[1]);
		printf("%3d", jum[1]);
		sum = sum + jum[1];
	}
	printf("\n�հ� : %d\n", sum);
	printf("��� : %.2f\n", (float)sum / n);
}