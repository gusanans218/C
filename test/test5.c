#include <stdio.h>
int main()
{
	int n, i = 0 ;
	printf(" �� �Է� :");
	scanf("%d", &n);

	while (n > 0)
	{
		i = i + n;
		printf(" �� �Է� : ");
		scanf("%d", &n);
	}
	printf("%d", i);
}