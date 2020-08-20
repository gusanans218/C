#include <stdio.h>
int main()
	{
	int a[5][5] = {0};
	int i, j, s=0, k=1;
	for (i = 0; i < 5; i++)
	{
		for (j = i; j <= 4; j++)
		{
			//scanf("%d", &a[i][j]);
			a[i][j] = k++;
			s = s + a[i][j];
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("   %2d", a[i][j]);
		}
		printf("\n");
	}
	printf("гу╟Х :   %d\n", s);
	return 0;
}