#include <stdio.h>
int main()
{
	int n;
	printf("정수 입력: ");
	scanf("%d", &n);
	if (n >= 5)
		printf("%d\n", n * n);
	else
		printf("%d\n", n);
	printf("정수\n");
	


	return 0;
}