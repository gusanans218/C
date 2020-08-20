#include <stdio.h>
int main()
{
	int a[5][5] = { 0 };
	int i, j, x=2, y=2, k=1;
	for (i = 0; i < 5; i++)
	{
		for (j = x; j <= y; j++)
		{
			a[i][j] = k++;
		}
		if (i < 2)
		{
        x--;
		y++;
			
		}
		else
		{
			x++;
			y--;
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
}
//문제 10번 2차원배열 종이