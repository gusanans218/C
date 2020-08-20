#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (30 <= a && a <= 40)
	{
		printf("win");
	}
	else if (60 <= a && a <= 70)
	{
		printf("win");
	}
	else
	{
		printf("lose");
	}
	return 0;
	//특별한 공 던지기
}