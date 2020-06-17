#include <stdio.h>
int main()
{
	/*int n, i=0;
	scanf("%d", &n);
	for (i = 1; i <=n; i++)
	{
		if (n%i==0)
			printf("%d", n);
		
	}*/
	int i, j, k=1;
	for (i = 1; i <= 5; i++)
	{
		if (i <= 3)
		{
			for (j = 1; j <= 4-i; j++)

				printf("   *");
			

		}
		else
		{
			for (j = 1; j <= i-2;j++)
				printf("   *");
			
		}
		printf("\n");
	}

	
}