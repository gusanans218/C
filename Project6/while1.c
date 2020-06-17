#include <stdio.h>
int main()
{
	int i, s = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		s = s + i;
	}
	printf("%d\n", s);
	return 0;
}
//
//	/*i = 1, s = 0;
//	while (i <= 10)
//	{
//		s = s + i;
//		i++;
//		printf("%d\n", s);
//	}
//	i = 1, s = 0;
//	do {
//		s = s + i;
//		i++;
//	} while (i <= 10);
//		printf("%d\n", s);*/
//}