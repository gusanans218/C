
#include <stdio.h>
int main()
{
	int i, j;
	for (i=1; i<=5; i++)
	{
		for (j = 1; j <= 5; j++)
		/*if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
		{
			printf("X");
			continue;

		}
		printf("%3d", i);*/
			printf("*");
		printf("\n");
	}
	
}