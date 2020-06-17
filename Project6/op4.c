#include <stdio.h>
int main()
{
	int i = 0, cnt=0;
	char pw;
	do
	{
		printf("비밀번호 입력 :");
		scanf("%c", &pw);
		getchar();
		cnt++;
		if (cnt == 3) 
			break;

		
	 
		
	} while (pw != 'q');
	if (cnt ==3 &&pw != 'q')
		printf("로그인 실패");

	 else printf("login");
	printf("\n");

	
	

	
	
	return 0;
}