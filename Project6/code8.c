#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d", &a, &b);
	if (a % 2 == 0)
	{
		printf("礎熱");
	}
	else
	{
		printf("�汝�");
	}
	printf("+");
	if (b % 2 == 0)
	{
		printf("礎熱");
	}
	else
	{
		printf("�汝�");
	}
	c = a + b;
	printf("=");
	if (c % 2 == 0)
	{
		printf("礎熱");
	}
	else
	{
		printf("�汝�");
	}
    return 0;
}