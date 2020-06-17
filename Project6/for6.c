//중첩 for문
#include <stdio.h>
int main()
{
	int i, j, n;
	//	 for (i = 1; i <= 3; i++) //3번반복
	//		{
	//		 for(j=1; j<=i; j++) //*찍기를 5번 반복
	//			 printf("*");
	//			 printf("\n"); //줄바꿔
	//}
	//	 }
	//for (i = 1; i <= 3; i++) //3번반복
	//{
	//	for (j = 1; j <=4-i; j++) //*찍기를 5번 반복
	//		printf("*");
	//	printf("\n"); //줄바꿔
	//}
	//	 }
	printf("홀수줄 입력 : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i <= n/2 +1)
		{
			for (j = 1; j <=i; j++)
				printf(" *");
		}
		else
		{
			for (j = 1; j <= n-i+1; j++)
				printf(" *");
		}
		printf("\n");
	}

} 