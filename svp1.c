#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int computer; 
	int user;
	int result[3] = { 0 };                                 
	int cnt = 0; 

	while (1)                               
	
	{
		computer = rand() % 3 + 1;
		printf("- 가위 바위 보 게임 -\n");
		printf(" 1. 가위  \n");
		printf("     --    --\n  --         -- \n  --       --\n  --     --\n   ------------\n  --------------\n   ----------------\n   --------------\n    ------------\n");
		printf("2. 바위-- = \n");
		printf("3. 보-- / \n");
		printf("4. 종료\n\n");
		printf("숫자를 입력해주세요 : ");
		scanf("%d", &user);

		if (user > 0 && user < 4) 

		{
			cnt++;
			printf("\n컴퓨터 : %s\n", (computer == 1 ? "--<  가위" : computer == 2 ? "--=  바위" : "--/  보"));
			printf("사용자 : %s\n\n", (user == 1 ? "--<  가위" : user == 2 ? "--=  바위" : "--/  보"));

			if (computer == user) 

			{
				printf("결과 : 무 \n\n");
				result[1]++;
			}

			else if (((computer == 1) && (user == 3)) ||((computer == 2) && (user == 1)) ||((computer == 3) && (user == 2)))
			{
				printf("결과 : 패\n\n");
				result[2]++; 
			}

			else
			{
				printf("결과 : 승\n\n");
				result[0]++;
			}
			printf("%d전 %d승 %d무 %d패\n\n", cnt, result[0], result[1], result[2]);

		}

		else 
		{
			if (user == 4)
			{
				printf("게임을 종료\n");
				break;
			}
			printf("숫자를 1~4사이로 입력하세요.\n\n");
		}
		system("pause");  
		system("cls");
	}
		return 0;
}