#include<stdio.h>
int main()
{
	int i, cnt = 0;
	for (i = 1; i <= 26;i++)
	{
		printf("%2c", i + 64);
		cnt++;
		if (cnt % 5 == 0)
			printf("\n");
	}
}