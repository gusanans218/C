#include <stdio.h>
int main()
{
	int a = 10, b = 5, temp;
	
	
	printf("a = %d b = %d", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("\n a = %d b = %d", a, b);
	return 0;
}


