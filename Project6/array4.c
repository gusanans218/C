#include <stdio.h>
int main()
{
	//�츮�� 5���� ������ ��, ���
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
	printf("�� : %d\n", s);
	printf("��� : %2f\n", (float)s / 5.0);
	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);

	


	return 0;
}