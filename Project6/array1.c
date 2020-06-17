#include <stdio.h>
int main()
{
	int i, jum[5];//선언
	
	
	/*scanf_s("%d", &jum[0]);
	scanf_s("%d", &jum[1]);
	scanf_s("%d", &jum[2]);
	scanf_s("%d", &jum[3]);
	scanf_s("%d", &jum[4]);*/
	printf(" 5명의 점수를 입력 :");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &jum[i]);
	printf(" 출력 :  ");
	for (i = 0; i < 5; i++)
		printf("%3d", jum[i]);
	return 0;
}



//int jum[4], i;
//for (i = 0; i < 5; i++) 
//{
//	printf("점수 : ");
//	scanf("%d", &jum[i]);
///*jum[1] = 1;
//jum[2] = 2;
//jum[3] = 3;*/

///*printf("%d", jum[0]);*/
//for (i = 0; i < 4; i++)
//	printf("%d", &jum[i]);
//return 0;