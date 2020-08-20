#include <stdio.h>
int main()
{
	//	int n,i;
	//	scanf("%d", &n);
	//	for (i = 2; i<=n; i++)
	//	{
	//		if (n % i == 0)
	//		{
	//
	//			break;
	//		}
	//	}
	//	if (n == i)
	//	{
	//		printf("%d\n", n);
	//		printf("소수");
	//		n++;
	//	}
	//	else
	//	{
	//		printf("합성수");
	//		
	//	}
	//}

	int a, b, gcm=0, temp=0, lcm=0;
	scanf("%d%d", &a, &b);
	lcm = a * b;

	while (1)
	{
		if (a % b == 0)
		{
			gcm = b;
			break;
		}
		else
		{
			a = b;
			b = temp % b;
		}
		
	}
	printf("%d", gcm);
	printf("%d", lcm / gcm);
}
