#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 10 == 3)
			printf("  %d", i);
		i++;
	}
	return 0;
}