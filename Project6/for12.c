#include <stdio.h>
int main()
{
	int n, i;
	printf(" n ют╥б : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("  %d", i);
		}
	}
}