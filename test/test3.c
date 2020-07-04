#include <stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	int num1 = 1;
	printf("╢э ют╥б :");
	scanf("%d", &num1);

	while (i < 10) 
	{
		int j = 1;
		while (j < 10)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
		printf("\n");
	}
}