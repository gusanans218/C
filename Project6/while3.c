#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int com, user,cnt=0 ;
	srand(time(NULL));
	com = rand()%10+1;
	/*printf("컴퓨터가 생각하는 숫자 출력 : %d\n\n", com);*/


	while (1)
	{
		printf("guess : ");
		scanf("%d", &user);
		cnt++;
		if (cnt == 5)
		{
			printf("5번 시도 이상으로 게임 실패\n");
			break;
		}

		if (com == user)
		{
			printf("%d번에 맞았어\n", cnt);
			break;
		}
		else if (com >= user)
			printf("더 큰 수야\n");
		else
			printf("더 작은수야\n");
		
	} 

	return 0;
}