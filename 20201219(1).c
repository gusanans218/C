#include<stdio.h>
int main()
{
	//int num1 = 0;
	//while (1)
	//{
	//	num1++;
	//	printf("%d\n", num1);
	//	if (num1 == 100)
	//		break;
	//}
	//return 0; //if문 사용해서 100까지 출력

	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i % 2 != 0)
	//		continue;
	//	printf("%d\n", i);
	//}
	//return 0; //if문 사용해서 100까지 짝수만 출력

	//int count;
	//scanf_s("%d", &count);
	//int i = 1;
	//while (1)
	//{
	//	printf("%d\n", i);
	//	if (i == count)
	//		break;
	//	i++;
	//}
	//return 0; //입력한 숫자까지 출력

	//int count;
	//scanf_s("%d", &count);
	//for (int i = 1; i < count; i++)
	//{
	//	if (i % 2 != 0)
	//		continue;
	//	printf("%d\n", i);
	//}
	//return 0; //숫자 입력할때까지 짝수만 출력 

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("j:%d", j);
	//	}
	//	printf("i:%d\n", i);
	//	printf("\n");
	//}
	//return 0; //가로 세로 출력

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//return 0; //5줄로 * 출력

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		if (j <= i)
	//			printf("*");
	//	}
	//	printf("\n");
	//}
	//return 0; //계단식 별 출력

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		if (j == i)
	//			printf("*");
	//		else
	//			printf(" ");
	//	}
	//	printf("\n");
	//}
	//return 0; //대각선으로 별 출력

	//#define _CRT_SECURE_NO_WARNINGS
//
//	int num1;
//	scanf_s("%d", &num1);
//
//	if (num1 == 1)
//		goto ONE;
//	else if (num1 == 2)
//		goto TWO;
//	else
//		goto EXIT;
//
//ONE:
//	printf("1입니다\n");
//	goto EXIT;
//
//TWO :
//	printf("2입니다\n");
//	goto EXIT;
//
//EXIT:
//	return 0;
//	//goto 사용해보기 if사용하는게 더 좋음

	//int num1 = 10;
	//printf("%p\n", &num1);
	//return 0;
	////포인터 메모리주소 출력(출력할때마다 달라짐)

	//int* numPtr;
	//int num1 = 10;
	//numPtr = &num1;
	//printf("%p\n", numPtr);
	//printf("%p\n", &num1);
	//return 0; //포인터 변수, 메모리 주소 출력

	//int* numPtr;
	//int num1 = 10;
	//numPtr = &num1;
	//printf("%d\n", *numPtr);
	//return 0; //역참조 연산자로 num1의 메모리 주소에 접ㅅ근하여 값을 가져왔다

	//long long* numPtr1;
	//float* numPtr2;
	//char* cPtr1;
	//long long num1 = 10;
	//float num2 = 3.5f;
	//char c1 = 'a';
	//numPtr1 = &num1;
	//numPtr2 = &num2;
	//cPtr1 = &c1;
	//printf("%lld\n", *numPtr1);
	//printf("%f\n", *numPtr2);
	//printf("%c\n", *cPtr1);
	//return 0; //다양한 포인터 선언

	//int* numPtr1;
//int** numPtr2;
//int num1 = 10;
//numPtr1 = &num1;
//numPtr2 = &numPtr1;
//printf("%d\n", **numPtr2);
//return 0; //메모리 주소를 저장했다가 두번 역참조해서 num1의 메모리 주소에 접근


}
