#include "calc.h"
int main()
 {
	int a, b, result;
	char op;
	printf("�� �� �Է� : ");
	scanf("%d%d", &a, &b);
	getchar();
	op = input();
	/*printf("%d %d %c\n", a, b, op);*/
	output(op, a, b);
}
