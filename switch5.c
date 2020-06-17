#include <stdio.h>
int main()
{
	int month;
	int year;
	printf("월을 입력: ");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31일 입니다", month); 
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30일 입니다", month);
		break;
	case 2:
		if ((year % 400 == 0)	|| 	((year %4==0)&& (year%100 !=0)))
			printf("29일 입니다", month);
		
		else
			printf("28일 입니다", month);

	default:
			printf("입력 오류입니다");
		
	}
	return 0;
}