#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d", &a, &b);
	if (a % 2 == 0)
	{
		printf("¦��");
	}
	else
	{
		printf("Ȧ��");
	}
	printf("+");
	if (b % 2 == 0)
	{
		printf("¦��");
	}
	else
	{
		printf("Ȧ��");
	}
	c = a + b;
	printf("=");
	if (c % 2 == 0)
	{
		printf("¦��");
	}
	else
	{
		printf("Ȧ��");
	}
    return 0;
}