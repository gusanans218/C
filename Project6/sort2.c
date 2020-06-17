#include <stdio.h>
int main()
{
	//버블정렬
	int i, j, temp = 0, a[5] = { 5,4,3,2,1 };
	printf("정렬 전 : ");
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

	printf("\n정렬 후  :");
	for (i = 0; i < 5; i++)
		printf("%3d", a[i]);

	return 0;
}
