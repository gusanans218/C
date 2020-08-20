#include <stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a+b+c+d<1)
	{
		printf("¸ð");
	}
	else if(a+b+c+d<2)
	{
		printf("µµ");
	}
	else if (a + b + c + d < 3)
	{
		printf("°³");
	}
	else if (a + b + c + d < 4)
	{
		printf("°É");
	}
	else if (a + b + c + d < 5)
	{
		printf("À·");
	}
}