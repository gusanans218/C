#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int com, user,cnt=0 ;
	srand(time(NULL));
	com = rand()%10+1;
	/*printf("��ǻ�Ͱ� �����ϴ� ���� ��� : %d\n\n", com);*/


	while (1)
	{
		printf("guess : ");
		scanf("%d", &user);
		cnt++;
		if (cnt == 5)
		{
			printf("5�� �õ� �̻����� ���� ����\n");
			break;
		}

		if (com == user)
		{
			printf("%d���� �¾Ҿ�\n", cnt);
			break;
		}
		else if (com >= user)
			printf("�� ū ����\n");
		else
			printf("�� ��������\n");
		
	} 

	return 0;
}