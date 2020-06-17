#include <stdio.h>
int main()
{
	int i = 1, j = 0;
    for (i = 1; i < 100; i += 2)
    {
        j = i + j;
     }
    printf("È¦¼öÀÇ ÇÕ: %d \n", j);

	return 0;
}