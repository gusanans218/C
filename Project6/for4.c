#include <stdio.h>
int main()
{
	int i, j, cnt=1;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 5; j++)
			printf("  %3d",cnt++ );
		printf("\n");
	}




	return 0;
}