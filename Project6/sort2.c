#include <stdio.h>
int main()
{
	//��������
	int i, j, temp = 0, a[5] = { 5,4,3,2,1 };
	printf("���� �� : ");
	for (i = 0; i < 5;i++)
		printf("%3d", a[i]);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <4-i;j++)
		{
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}

	}

	printf("\n���� ��  :");
	for (i = 0; i < 5; i++)
		printf("%3d", a[i]);

	return 0;
}
