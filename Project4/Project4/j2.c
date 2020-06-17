#include <stdio.h>
int main()
{
	int i = 1, sum = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 2 == 0)
			sum -= i;
		else
			sum += i;
	}
	return 0;
}

 



//t i = 1, j = 0, m = 0;
//for (i = 1; i < 100; i -= 2)
//{
	//j = i - j;
//}
//for (i = 1; i < 100; i += 1)
//{
	//j = i + j;
//}
//m = j + i;
//printf("%d", m);