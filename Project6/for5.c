#include <stdio.h>
int main()
{
	//int i,j;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <= 9; j++)
	//	{
	//		printf("%d*%d=%2d \n", i, j, j * i);
	//	}
	//	printf("\n");
	//}

	int i, j, num1,num2;
	printf("숫자를 입력 \n");
	scanf("%d%d", &num1, &num2);
		printf("%d단입니다.\n", num1, num2); 

	for (i = 1; i < 10; i++)
	{
		for (j = num1; j <= num2; j++)
		{
			printf("%2d*%d=%2d", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}