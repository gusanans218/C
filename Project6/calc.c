#include "calc.h"
int main()
 {
	int a, b, result;
	char op;
	printf("두 수 입력 : ");
	scanf("%d%d", &a, &b);
	getchar();
	op = input();
	/*printf("%d %d %c\n", a, b, op);*/
	output(op, a, b);
}
