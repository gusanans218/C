#include <stdio.h>
int main()
{
	int i, j, temp, num, flag = 1;
	int a[10] = { 45,1,21,3,73,5,50,9,8,6};
	for (i = 0; i < 10; i++)
	{
		printf(" %d", a[i]);
		
	}
	/*for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3-i; j++)
		{
			if (a[j] < a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	    }
	}*/
	for (i = 0; i < 10; i++)
	{
		for (j = i+1; j <= 9; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf(" %d", a[i]);

	}

	printf("\n¹øÈ£ÀÔ·Â : ");
	scanf("%d", &num);
	for (i = 0; i < 10; i++)
	{
		if (a[i] == num)
		{
			flag = 0;
		}
		
	}
	if (flag == 0)
	{
		printf("´çÃ·");
	}
	else
	{
		printf("²Î");
	}
	return 0;
}