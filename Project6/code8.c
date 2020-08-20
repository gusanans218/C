#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d", &a, &b);
	if (a % 2 == 0)
	{
		printf("Â¦¼ö");
	}
	else
	{
		printf("È¦¼ö");
	}
	printf("+");
	if (b % 2 == 0)
	{
		printf("Â¦¼ö");
	}
	else
	{
		printf("È¦¼ö");
	}
	c = a + b;
	printf("=");
	if (c % 2 == 0)
	{
		printf("Â¦¼ö");
	}
	else
	{
		printf("È¦¼ö");
	}
    return 0;
}