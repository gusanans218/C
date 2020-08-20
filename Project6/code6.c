#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (50 <= a && a <= 70)
	{
		printf("win");
	}
	else if (a % 6 == 0)
	{
		printf("win");
	}
	else
	{
		printf("lose");
	}
	return 0;
	//특별한 공 던지기 3
	
}