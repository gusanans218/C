#include <stdio.h>
int main()
{
	int jum;
	printf("점수 입력 :");
	scanf_s("%d", &jum);
	switch (jum / 10)
	{
	  case 10:
		  break;
	  case 9: 
		printf("A"); 
		break;
	  case 8:  
		printf("B");
		break;
	  case 7:  
		printf("C");
		break;
	  case 6:  
		printf("D");
		break;
	  default: 
		printf("E"); 
		break;
		}

  return 0;
}