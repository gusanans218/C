#include <stdio.h>
#include <ctype.h>
int main()
{
	char b;
	printf("�������� �Է�: ");
	scanf_s("%c", &b);
	b = toupper(b);
	switch (b)
	{
		case'A':
		printf("�Ĳ��ϴ�");
		break;
	case 'B' :
		printf("�����ϴ�");
		break;
	case 'O':
		printf("�����ϴ�");
		break;
	default :
		printf("õ�� �ƴϸ� ������");
		break;
	}



	return 0;
}