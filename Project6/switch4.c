#include <stdio.h>
#include <ctype.h>
int main()
{
	char a;
    printf("���ڸ� �Է�: ");
	scanf("%c", &a);
	a = toupper(a);
	switch (a)
	{
	case 'A' :
	case'a':
		
	case 'E':
	case 'e':
		
	case 'I':
	case 'i':
	
	case 'O':
	case 'o':
		
	case 'U':
	case 'u':
		printf("����");
		break;
	default: 
		printf("����");
		break;

	}


	return 0;
}