#include <stdio.h>
int main()
{
	int car = 170, a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a <= 170)
	{
		printf("CRASH ");
		printf("%d", a);
	
	}
	else if (b <= 170 )
	{
		printf("CRASH ");
		printf("%d", b);
	
	}
	else if (c <= 170)

	{
		printf("CRASH ");
		printf("%d", c);
		
	}
	else	
		printf("PASS");



}


