#include <stdio.h>
int main()
{
	int n;
	printf("원하는 번호 입력 :");
	scanf("%d", &n);
	switch (n) //n에 들어가는 숫자
	{
	case 1:
		printf("콜라\n");
		break;
	case 2:
		printf("사이다\n");
		break;
	case 3:
		printf("커피\n");
		break;
	default: 
		printf("에러\n");
		
	}
	return 0;
}