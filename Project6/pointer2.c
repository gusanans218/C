#include <stdio.h>
int main()
{
	char ch,* cp; 
	int i, * ip;
	float f, * fp;
	double d, * dp;
	cp = &ch; ip = &i; fp = &f; dp = &d;
	*cp = 'A'; *ip = 10; *fp = 3.14; *dp = 5.345678;
	printf("%c %d %.2f %.3lf\n", ch, i, f, d);
	printf("%c %d %.2f %.3lf\n", *cp, *ip, *fp, *dp);
	printf("%p %p %p %p\n", &ch, &i, &f, &d);
	printf("%p %p %p %p\n", cp, ip, fp, dp);
	(*cp)
}