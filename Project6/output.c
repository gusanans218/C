void output(char op, int a, int b)
{
	int result;

switch (op)
{
case '+':
	result = add(a, b);
	break;
case '-':
	result = sub(a, b);
	break;
case '*':
	result = mul(a, b);
	break;
case '/':
	result = div(a, b);
	break;
}
printf("°á°ú´Â %d\n", result);
}
