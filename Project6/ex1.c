#include <stdio.h>
int main()
{

	int a = 0, b[100] = { 0 }, i = 0, cnt = -1;

	scanf("%d", &a);

	while (a != 0)
	{
		b[i] = a % 2;
		printf("  %d", b[i]);
		cnt++;

		i++;
		a = a / 2;
	}
	printf("\n");
	for (; cnt >= 0; cnt--)
	{
		printf("  %d", b[cnt]);
	}
	return 0;
}