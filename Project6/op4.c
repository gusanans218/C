#include <stdio.h>
int main()
{
	int i = 0, cnt=0;
	char pw;
	do
	{
		printf("��й�ȣ �Է� :");
		scanf("%c", &pw);
		getchar();
		cnt++;
		if (cnt == 3) 
			break;

		
	 
		
	} while (pw != 'q');
	if (cnt ==3 &&pw != 'q')
		printf("�α��� ����");

	 else printf("login");
	printf("\n");

	
	

	
	
	return 0;
}