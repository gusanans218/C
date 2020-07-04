#include <stdio.h>
int main()
{
	int i, j;
	i = 1;
	printf(" 숫자 입력 :");
	scanf("%d", &j);
   
	while (i <= j)
	{
		printf("%d Hello world!\n", i);
		i++;
	}

	return 0;
}