#include <stdio.h>
int main()
{
	int i = 1, j = 0;
    for (i = 1; i < 100; i += 2)
    {
        j = i + j;
     }
    printf("Ȧ���� ��: %d \n", j);

	return 0;
}