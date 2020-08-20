#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a % 7 == 0)
	{
		printf("multiple");
	}
	else
	{
		printf("not multiple");
	}
	return 0;
	//7의 배수 출력
}