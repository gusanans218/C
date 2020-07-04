#include <stdio.h>
int main()
{
	int n, i = 0 ;
	printf(" 수 입력 :");
	scanf("%d", &n);

	while (n > 0)
	{
		i = i + n;
		printf(" 수 입력 : ");
		scanf("%d", &n);
	}
	printf("%d", i);
}