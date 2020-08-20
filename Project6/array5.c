#include <stdio.h>
int main()
{
	//배열에 숫자가 있는데 찾기 (search)
	int num[10] = { 12, 23, 25, 35, 46, 57, 66, 77, 82, 93 };
	//입력받기, 찾기(for문으로 10번 반복), 조건문으로 찾으면 출력
	int n, i, flag=0;
	printf("찾을 숫자 입력 : ");
	scanf_s("%d", &n);
	for (i = 1; i < 10; i++)
	{
		if (n == num[i])
		{
			flag = 1; //대입 =
			break;
		}
			
		/*else
			printf("not found\n");*/

	}
	if (flag == 1) //조건 ==
		printf("found\n");
	else
		printf("not found\n");

	return 0;
}