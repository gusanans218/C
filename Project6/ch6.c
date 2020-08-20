#include <stdio.h>
int main()
{
	char a[][100] = { "apple","banana","grape" };
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", a[i]);
     }
}