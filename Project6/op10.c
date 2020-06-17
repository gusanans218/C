#include <stdio.h>
int main()
{
	int a[4] = { 1,2,3,4 };
	int i, s = 0, max = 0, min;
	scanf("%d", &a[i]);
	max = a[0];
	min = a[0];
	s = a[0];
	for (i = 1;i < 4; i++)
	{
		scanf("%d", &a[i]);
		s = s + a[i];
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}

	printf("%d\n", s);
	printf("%.2f\n", (float)s / 4);
	printf("%d\n", max);
	printf("%d\n", min);
	printf("\n");
	for (i = 0;i < 4; i++)
		printf("%3d", a[i]);
	return 0;
}