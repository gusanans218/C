#include <stdio.h>
int main()
{
	int month;
	int year;
	printf("���� �Է�: ");
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
		printf("31�� �Դϴ�", month); 
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30�� �Դϴ�", month);
		break;
	case 2:
		if ((year % 400 == 0)	|| 	((year %4==0)&& (year%100 !=0)))
			printf("29�� �Դϴ�", month);
		
		else
			printf("28�� �Դϴ�", month);

	default:
			printf("�Է� �����Դϴ�");
		
	}
	return 0;
}