#include <stdio.h>
int GetstringLength(char data[])
{
	int count = 0;
	while (data[count]) count++;
	return count;
}

void main()
{
	int data_length;
	char data[10] = { 'h','a','p','p','y',0, };
	data_length = GetstringLength(data);
	printf("data length = %d\n", data_length);
}//문자열 길이 출력하기