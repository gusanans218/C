#include <stdio.h>
int main()
{
	int i, jum[5];//����
    printf(" 5���� ������ �Է� :");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &jum[i]);
	printf(" �Ųٷ� ��� :  ");
	for (i = 4; i >= 0; i--)
		printf("%3d", jum[i]);
	return 0;
}