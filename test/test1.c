#include <stdio.h>
int main()
{
	/*int i, l;
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("����");
		break;
	case 2:
		printf("����");
		break;
	case 8:
		printf("����");
		break;
	case 3:
		printf("�¶��ΰ���");
		break;
	case 4:
		printf("�¶��ΰ���");
		break;
	case 5:
		printf("�¶��ΰ���");
		break;
	default:
		printf("�����");
		break;
	}
	return 0;*/
	/*int n = 0, i = 0, j = 0;
	scanf_s("%d", &n);
	for (i >= 1, i <= 9, i++;);
	{
		for (j>=1, j<=9, j++;);
		printf("%d * %d", n * j);

	}*/
	/*int a = 0, sum = 0;
	do (a);
	while (a != 0);
	{
		scanf("%d", &a);
		sum = a + sum;

	}

	printf("%d", sum);*/
	/*int x = 10, y = 20, temp=0;
	printf("%d%d", x, y, temp );*/
    /*int i, j, k = 1 ;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j < 4-i; j++)
			printf("   ");
		for (j = 1; j <= i; j++)
			printf(" %d ", k= j);
		printf("\n");

	}
	return 0;*/


	int i=0, j=0, num1=0;
	printf("n �Է� \n");
	scanf_s("%d", &num1);

	for (i = 1; i < 10; i++)
	{
		for(j = 1; j<10; j++)
		
			printf("%2d*%d=%2d", num1*i);
		
		printf("\n");
	}
	return 0;
}
