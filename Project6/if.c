#include <stdio.h>
int main()
{
	int n;
	printf("���簢�� �� ���� ���� : ");
	scanf("%d", &n);
	if (n % 2 != 1)
	{
		printf("Ȧ���Դϴ� \n");
		printf("�ѷ��� %d�̴�", n * 4);
	}
	else
	printf("¦���Դϴ� \n");
	printf("���̴� %d�̴�", n * n);

	return 0;
	
		
}