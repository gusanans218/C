#include <stdio.h>
int main()
{
	int score; 
	char grade;

	printf(" 점수를 입력 : ");
	scanf_s("%d", &score);
	if (score >= 90)
	{
		grade = 'A';
		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
	}
	else
	{
		grade = 'B';
		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
	}
	printf("작업 종료 \n");

	return 0;
}