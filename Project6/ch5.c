#include <stdio.h>
int main()
{
	//	char c[3][10] = { "January", "February","March" };
	//	int i, j;
	//	for (i = 1; i < 2;i++)
	//	{
	//		for (j = 2; j <= 2;j++)
	//		{
	//			printf("%c", c[i][j]);
	//		}
	//		printf("\n");
	//	}
	//	
	//}
	//
	//	/*for (i = 0;i <= 2;i++)
	//	{
	//		printf("%s", c[i]);
	//		printf("\n");
	//	}
	//	
	//}*/
	char add[][50] = { "qustmdgus123@naver.com","rmsidwek456@daum.net","qqq@gmail.com","bbb@gmail.com" };
	int i,j,k,m;
	int cnt[100] = { 0 };
	char a[10];
	int b[10];
	j = sizeof(add)/sizeof(add[0]);//전체 나누기 한줄 50개의 자리=줄 몇갠지 앎
	printf("%d\n", j);
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", add[i]);
	}
	for (i = 0; i < j; i++)
	{
		for (k = 0; add[i][k] != '@'; k++)//@이 나오기 전까지 출력
		{
			printf("%c", add[i][k]);
			cnt[i]++;//@의 전까지의 숫자의 갯수
		}
		printf("\n");
	}
	for (k = 0; k < j; k++)
	{
		for (m = cnt[k]+1; add[k][m]!=NULL; m++)//널값이 될때 멈추기
		{
			printf("%c", add[k][m]);
		}
		printf("\n");
	}
}

//for (i = 0; i < 2; i++)
	//{
	//	/*scanf("%s", add[i]);*/
	//}