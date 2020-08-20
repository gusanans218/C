//#include <stdio.h>
//int main()
//{
//	int n, b,i;
//	scanf("%d", &n);
//	for (b = 1; b <= n; b++)
//	{
//		i=(n%2==0)
//
//	}
#include <stdio.h>
	/*int main()
	{
		int n,m;
		int i, num = 0;
		scanf("%d %d", &n, &m);
		for (i = n; i <= m; i++)
		{
			printf("%d ", i);
		}
		
	}*/
int main()
{
	int a;
	scanf("%d", &a);
	if (a > 20)
	{
		printf("비만");
	}
	else if (a > 10)
	{
		printf("과체중");
	}
	else
	{
		printf("정상");
	}
}