#include <stdio.h>
int main()
{
	int a[2][3] = { 1,2,3,4,5,6 };
	int b[2][3] = { 7,8,9,1,2,3 };
	int c[2][3];
	int i, j, s = 0;
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] =  a[i][j]+b[i][j];
			printf(" %d",  c[i][j]);
		}
		printf("\n");
	}


	
	return 0;
}