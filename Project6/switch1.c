#include <stdio.h>
int main()
{
	int n;
	printf("���ϴ� ��ȣ �Է� :");
	scanf("%d", &n);
	switch (n) //n�� ���� ����
	{
	case 1:
		printf("�ݶ�\n");
		break;
	case 2:
		printf("���̴�\n");
		break;
	case 3:
		printf("Ŀ��\n");
		break;
	default: 
		printf("����\n");
		
	}
	return 0;
}