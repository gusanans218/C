#include <stdio.h>
int main()
{
	int i, j, n, cnt=65 ;
	printf(" ���� �Է� : ");
	scanf("%d", &n);
	for ( i = 1; i <= n; i++)
	{

		for (j = 1; j <= n-i+1; j++)
		{
			printf("%3c", cnt++);
		}
		printf("\n");
	}
}