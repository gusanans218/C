#include <stdio.h>
#include <ctype.h>
int main()
{
	char a;
    printf("문자를 입력: ");
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
		printf("모음");
		break;
	default: 
		printf("자음");
		break;

	}


	return 0;
}