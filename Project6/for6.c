//��ø for��
#include <stdio.h>
int main()
{
	int i, j, n;
	//	 for (i = 1; i <= 3; i++) //3���ݺ�
	//		{
	//		 for(j=1; j<=i; j++) //*��⸦ 5�� �ݺ�
	//			 printf("*");
	//			 printf("\n"); //�ٹٲ�
	//}
	//	 }
	//for (i = 1; i <= 3; i++) //3���ݺ�
	//{
	//	for (j = 1; j <=4-i; j++) //*��⸦ 5�� �ݺ�
	//		printf("*");
	//	printf("\n"); //�ٹٲ�
	//}
	//	 }
	printf("Ȧ���� �Է� : ");
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