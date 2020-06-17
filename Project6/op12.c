#include <stdio.h>
int main()
{
	/*int dab[10] = { 1,3,4,2,5,1,3,2,4,5 };
	int omr[10] = { 1,3,2,2,5,4,3,2,4,5 };
	int i;
	int s = 0, cnt=0;
	for (i = 0;i < 10;i++)
	{
		printf("%d번 : ", i+1);
		if (dab[i] == omr[i])
		{
			s += 10;
			cnt++;
			printf("O\n");
		}
		else
			printf("X\n");
		printf("\n");
	}
	printf("점수 : %d\n", s);
	printf("갯수: %d\n", cnt);
	return 0;*/
	//int a[10] = { 0,1 };
	//int i;
	//for (i = 2;i <= 9;i++)
	//{
	//	a[i] = a[i - 1] + a[i - 2];
	//}
	//for (i = 0; i <= 9; i++)
	//	printf("%d", i);
	////피보나치
	/*int n = 0;
	int a[10] = { 0 }, k = 0, i = 0;
	scanf("%d", &n);
	while (n)
	{
		a[k] = n % 2;
		n /= 2;
		k++;
	}
	for (i = k-1; i >= 0; i--)
	{
		printf("%d", a[i]);
	}*/
	/*int i, j, k;
	for (i = 1; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 1; k <= 9; k++)
			{
				if (100 * i + 10 * j + k - 10 * i + j == 10 * k + k)
				{
					printf(" %d  %d %d", i, j, k);
				}
			}
		}
	}*/
	/*int x, y, i, j;
	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 10; y++)
		{
			if ((x + y == 10) && (2 * x + 4 * y == 32))
			{
				printf("%d %d", x, y);
			}
		}
	}*/
	/*char ch;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '\n')
		{
			break;

		}
		else if (ch == 'a')
		{
			printf("X");
		}
		else if (ch == 'b')
		{
			printf("y");
		}
		else if (ch == 'c')
		{
			printf("z");
		}
		else
			printf("%c", ch - 3);
	}*/
	int a[5] = { 83,35,56,72,100 };
	int i, j;
	for (i = 0; i < 5; i++)
	{
		printf("  a[%d]=  %d", i, a[i]);
		for (j = 0; j < a[i]/10;j++)
		{
			
			printf("  *");
			
		}
		printf("\n");
	}
}