#include <stdio.h>
int main()
{
	/*int i;
	for (i = 1; i <= 5; i++)
		printf("%d", i);*/
	/*int i;
	for (i = 10; i <= 15; i++)
		printf("%d\n", i);*/

	int i=1 , cnt=0;
	for (i = 1 ; i <= 100; i++)
		if (i % 5 == 0)
		{
			printf("%4d", i);
			cnt++;
			if (cnt % 5 == 0)
				printf("\n");
		}
	printf("\n\n\n5ÀÇ ¹è¼ö");
	printf("\n%d", cnt);
	return 0;
}