#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	{
		printf("oh my god");
		break;
	}
	case 2:
	case 4:
	case 6:
	{
		printf("enjoy");
		break;
	}
	}
	return 0;
}