#include <stdio.h>
void main() {

	char id[15] = "";
	int year = 0;
	//배열의 이름->배열의 주소
	scanf("%s", id);
	printf("%s", id);
	if (id[7] == '3' || id[7] == '1')
		printf("\n남자");
	else
		printf("\n여자");
	if (id[7] == '3' || id[7] == '4')
	{
		year = 2000 + (id[0] - '0') * 10 + id[1] - '0';
	}
	else if (id[7] == '1' || id[7] == '2')
	{
		year = 1900 + (id[0] - '0') * 10 + id[1] - '0';
	}
	printf("\n%d", 2020-year+1);

}