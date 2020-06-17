#include <stdio.h>
int main()
{
	int n;
	printf("정사각형 한 변의 길이 : ");
	scanf("%d", &n);
	if (n % 2 != 1)
	{
		printf("홀수입니다 \n");
		printf("둘레는 %d이다", n * 4);
	}
	else
	printf("짝수입니다 \n");
	printf("넓이는 %d이다", n * n);

	return 0;
	
		
}