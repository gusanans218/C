#include <stdio.h>
#include <ctype.h>
int main()
{
	char b;
	printf("혈액형을 입력: ");
	scanf_s("%c", &b);
	b = toupper(b);
	switch (b)
	{
		case'A':
		printf("꼼꼼하다");
		break;
	case 'B' :
		printf("털털하다");
		break;
	case 'O':
		printf("솔직하다");
		break;
	default :
		printf("천재 아니면 사이코");
		break;
	}



	return 0;
}