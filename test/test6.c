	#include <stdio.h>
	int main()
	{
	int i, num;
	printf("�� ��?");
	scanf("%d", &i);
	num = 9;
	do
	{
	printf("%d * %d = %d \n", i, num, i * num);
	num--;
	}

	while (num >= 1);
    }