#include <stdio.h>
int main()
{
	int n,i ,l=0,num=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (l = 0; l > n-i; l--)
		{
			printf("*");
		}
		printf("\n");
	}
	
}