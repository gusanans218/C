#include <stdio.h>
int main()
{
	int i, j, temp = 0, a[5] = { 5,4,3,2,1 };
	//선택 정렬
	for (i = 0; i < 5;i++)
	printf("%3d", a[i]);
	for (i = 0; i < 5; i++)
	{
		for(j=i+1; j<5;j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
			
	}

	printf("\n정렬 후  :");
	for (i = 0; i < 5; i++)
	printf("%3d", a[i]);

	return 0;
}

