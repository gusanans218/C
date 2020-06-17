#include <stdio.h>
int main()
{
	int i, j, k = 1;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j < i; j++)
			printf("    ");
		for (j = 1; j <= 4 - i; j++)
			printf("  %2d", k++);
		printf("\n");

	}
	return 0;
}