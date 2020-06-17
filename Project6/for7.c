#include <stdio.h>
int main()
{
	int i, j, n;
	printf(" 홀수줄 입력 : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i <= n / 2 + 1)
		{
			for (j =n; j >= n/2+i; j--)
				printf(" *");
		}
		else
		{
			for (j = n / 2 + 1; j <= i; j++)
				printf(" *");
		}
        printf("\n");
	}
	return 0;
}