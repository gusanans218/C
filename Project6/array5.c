#include <stdio.h>
int main()
{
	//�迭�� ���ڰ� �ִµ� ã�� (search)
	int num[10] = { 12, 23, 25, 35, 46, 57, 66, 77, 82, 93 };
	//�Է¹ޱ�, ã��(for������ 10�� �ݺ�), ���ǹ����� ã���� ���
	int n, i, flag=0;
	printf("ã�� ���� �Է� : ");
	scanf_s("%d", &n);
	for (i = 1; i < 10; i++)
	{
		if (n == num[i])
		{
			flag = 1; //���� =
			break;
		}
			
		/*else
			printf("not found\n");*/

	}
	if (flag == 1) //���� ==
		printf("found\n");
	else
		printf("not found\n");

	return 0;
}