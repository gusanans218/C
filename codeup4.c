#include <stdio.h>
int main()
{
	char n, i;
	int a;
	scanf("%c%c", &n, &i);
	for (a = n; a <= i; a++)
	{
		printf("%c", a);
	}
}