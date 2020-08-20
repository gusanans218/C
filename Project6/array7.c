#include <stdio.h>
int main()
{
	int n, a[10] = { 0 }, i = 0, j;
	printf("십진수 입력: ");
	scanf("%d", &n); // n = 11
	while (n!=0) // while (n)
	{
		a[i] = n % 2; //n =11
		n = n / 2; //n=5
		i++;
	}
	for (j = i-1; j>=0; j--)
		printf("%2d", a[j]);

	return 0;
}