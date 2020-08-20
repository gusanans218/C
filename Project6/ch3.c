#include <stdio.h>
void main()
{
	
	char a[10] ="apple",b[10]="";
	int i, cnt = 0;
	gets(a);
	/*for (i = 0; a[i]!="\0"; i++)
	{
		printf("%c", a[i]);
		cnt++;
	}*/
	printf("\n%d\n", strlen(a));
	/*for (i = 0; i < strlen; i++)
	{
		b[i] = a[i];

	}*/
	//a=>b copy
	strcpy(b, a);
	puts(a);
	puts(b);
}