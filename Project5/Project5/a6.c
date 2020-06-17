#include <stdio.h>
#include <string.h>

void main()
{
	char data[10] = { 'h','e','l','l','o',0};
	char result[16];

	strcpy(result, data);
	strcat(result, "world!");

	printf("%s + \" world!\" = %s\n", data, result);
}