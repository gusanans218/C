#include <stdio.h>
int main()
{
	char a[10]="hello";
	int i;
	for(i=4; i>=0; i--)
	printf("%c", a[i]);
	printf("\n");
	for (i = 0; i <= 4; i++)
		printf("%c", a[i]);
	printf("\n");
	puts(a);
	printf("%s", a);
	printf("\n");
	
	return 0;

}