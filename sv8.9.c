	#include <stdio.h>
	int main(void)
	{

	//int x = 10, y = 10;
	//printf("x=%d\n", x);
//printf("++x�� ��=%d\n", ++x);
//printf("x=%d\n\n", x);
//printf("y=%d\n", y);
//printf("y++�� ��=%d\n", y++);
//printf("y=%d\n", y);
////indec.c

	//int user, change = 0;
	//int price, c5000, c1000, c500, c100;
	//printf("���� �� �Է�");
	//scanf("%d", &price);
	//printf("����ڰ� �� ��");
	//scanf("%d", &user);
	//change = user - price;
	//c5000 = change / 5000;
	//change = change % 5000;
	//c1000 = change / 1000;
	//change = change % 1000;
	//c500 = change / 500;
	//change = change % 500;
	//c100 = change / 100;
	//change = change % 100;
	//printf("��õ����: %d��\n", c5000);
	//printf("õ����: %d��\n", c1000);
	//printf("���������: %d��\n", c500);
	//printf("�������: %d��\n", c100);
	////change.c

	//int x, y;
	//x = 1;
	//printf("���� x+1�� ���� %d\n", x + 1);
	//printf("���� y=10+(x+2+7)�� ���� %d\n", y = 10 + (x = 2 + 7));
	//printf("���� y=x=3�� ���� %d\n", y = x = 3);
	////assignment.c

	//int x = 10, y = 10, z = 33;
//x += 1;
//y *= 2;
//z %= 10 + 20;
//printf("x=%d y=%d z=%d\n", x, y, z);
////abbr.c

	//int x, y;
//printf("�ΰ��� ������ �Է��Ͻÿ�: ");
//scanf("%d%d", &x, &y);
//printf("x ==y�� ����� : %d\n", x == y);
//printf("x !=y�� ����� : %d\n", x != y);
//printf("x  >y�� ����� : %d\n", x > y);
//printf("x  <y�� ����� : %d\n", x < y);
//printf("x >=y�� ����� : %d\n", x >= y);
//printf("x <=y�� ����� : %d\n", x <= y);
////relational.c

	//int x, y;
	//printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	//scanf("%d%d", &x, &y);
	//printf("%d && %d�� ����� %d\n", x, y, x&& y);
	//printf("%d || %d�� ����� %d\n", x, y, x || y);
	//printf("!%d�� �����: %d\n", x, !x);
	////logic.c

	//int year, result;
	//printf("������ �Է�");
	//scanf("%d", &year);
	//result = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
	//printf("result=%d\n", result);
	////leapyear.cpp

	//int x, y;
	//printf("ù��° ��=");
	//scanf("%d", &x);
	//printf("�ι�° ��=");
	//scanf("%d", &y);
	//printf("ū ��=%d\n", (x > y) ? x : y);
	//printf("���� �� =%d\n", (x < y) ? x : y);
	////condition.c

	//unsigned int num;
	//printf("10����");
	//scanf("%u", &num);
	//unsigned int mask = 1 << 7;
	//printf("2����");
	//((num & mask) == 0) ? printf("0") : printf("1");
	//mask = mask >> 1;
	//((num & mask) == 0) ? printf("0") : printf("1");
	//mask = mask >> 1;
	//((num & mask) == 0) ? printf("0") : printf("1");
	//mask = mask >> 1;
	//((num & mask) == 0) ? printf("0") : printf("1");
	//mask = mask >> 1;
	//((num & mask) == 0) ? printf("0") : printf("1");
	//mask = mask >> 1;
	//((num & mask) == 0) ? printf("0") : printf("1");
	//mask = mask >> 1;
	//((num & mask) == 0) ? printf("0") : printf("1");
	//mask = mask >> 1;
	//((num& mask) == 0) ? printf("0") : printf("1");
	//mask = mask >> 1;
	//printf("\n");
	////to_binary.c

	//char data = 'a';
	//char key = 0xff;
	//char encrpted_data;
	//encrpted_data = data ^ key;
	//printf("��ȣȭ�� ���� %c\n", encrpted_data);
	//char orig_data;
	//orig_data = encrpted_data ^ key;
	//printf("������ ������ =%c\n", orig_data);
	////xor_enc.c

	//char c;
	//int i;
	//float f;
	//c = 10000;
	//i = 1.23456 + 10;
	//f = 10 + 20;
	//printf("c=%d. i=%d, f=%f\n", c, i, f);
	////convert1.c

	//int i;
	//double f;
	//f = 5 / 4;
	//printf("%f\n", f);
	//f = (double)5 / 4;
	//printf("%f\n", f);
	//f = 5.0 / 4;
	//printf("%f\n", f);
	//f = (double)5 / (double)4;
	//printf("%f\n", f);
	//i = 1.3 + 1.8;
	//printf("%d\n", i);
	////typecast.c

	//int x = 0, y = 0;
	//int result;
	//result = 2 > 3 || 6 > 7;
	//printf("%d\n", result);
	//result = 2 || 3 && 3 > 2;
	//printf("%d\n", result);
	//result = x = y = 1;
	//printf("%d\n", result);
	//result = -++x + y--;
	//printf("%d\n", result);
	////prec.c

	//double f_temp;
	//double c_temp;
	//printf("ȭ���µ��� �Է��Ͻÿ�: ");
	//scanf("%lf", &f_temp);
	//c_temp = 5.0 / 9.0 * (f_temp - 32);
	//printf("�����µ��� %f�Դϴ�\n", c_temp);
	////temperature.c

	//int number;
	//printf("������ �Է��Ͻÿ�");
	//scanf("%d", &number);
	//if (number > 0)
	//	printf("����Դϴ�\n");
	//printf("�Էµ� ���� %d�Դϴ�\n", number);
	////if1.c

	//int number;
//printf("������ �Է��Ͻÿ�:");
//scanf("%d", &number);
//if (number < 0)
//	number = -number;
//printf("���밪�� %d�Դϴ�\n", number);
////if2.c

	//int n, d, result;
//printf("���ڸ� �Է�");
//scanf("%d", &n);
//printf("�и� �Է�");
//scanf("%d", &d);
//if (d == 0)
//{
//	printf("0���� �������� �����ϴ�\n");
//}
//
//else {
//	result = n / d;
//	printf("����� %d�Դϴ�\n", result);
//}
////if_else

	//int year;
	//printf("������ �Է��Ͻÿ�: ");
	//scanf("%d", &year);
	//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//printf("%d���� �����Դϴ�\n", year);
	//else
	//printf("%d���� ������ �ƴմϴ�\n", year);
	////leap_year.c

	//char ch;
//printf("���ڸ� �Է�");
//scanf("%c", &ch);
//if (ch >= 'A' && ch <= 'Z')
//printf("%c�� �빮���Դϴ�\n", ch);
//else if (ch >= 'a' && ch <= 'z')
//printf("%c�� �ҹ����Դϴ�\n", ch);
//else if (ch >= '0' && ch <= '9')
//printf("%c�� �����Դϴ�\n", ch);
//else
//printf("%c�� ��Ÿ�����Դϴ�\n", ch);
////charclass.c

	//char op;
//int x, y, result;
//printf("������ �Է��Ͻÿ� (��:2+5)/n");
//printf(">>");
//scanf("%d %c %d", &x, &op, &y);
//if (op == '+')
//result = x + y;
//else if (op == '-')
//result = x - y;
//else if (op == '*')
//result = x * y;
//else if (op == '/')
//result = x / y;
//else if (op == '%')
//result = x % y;
//else
//printf("�������� �ʴ� ������\n");
//printf("%d %c %d=%d\n", x, op, y, result);
////calc1.c

	//double a, b, c, dis;
	//printf("��� a, ��� b, ��� c�� ���ʴ�� �Է�");
	//scanf("%lf %lf %lf", &a, &b, &c);
	//if (a == 0)
	//	printf("�������� ���� %f�Դϴ�", -c / b);
	//else
	//{
	//	dis = b * b - 4.0 * a * c;
	//	if (dis >= 0)
	//	{
	//		printf("�������� ���� %f�Դϴ�\n", (-b + sqrt(dis)) / (2.0 * a));
	//		printf("�������� ���� %f�Դϴ�\n", (-b - sqrt(dis)) / (2.0 * a));
	//	}
	//	else
	//		printf("�Ǳ��� �������� �ʽ��ϴ�\n");
	//}
	////quad_eq.c

	//int month, days;
	//printf("���� �Է��Ͻÿ�:");
	//scanf("%d", &month);
	//switch (month)
	//{
	//case 2:
	//	days = 28;
	//	break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	days = 30;
	//	break;
	//default:
	//	days = 31;
	//	break;
	//}
	//printf("%d���� �ϼ��� %d�Դϴ�\n", month, days);
	////days_in_month.c

	//char op;
	//int x, y, result;
	//printf("������ �Է��Ͻÿ�(��:2+5):\n");
	//printf(">>");
	//scanf("%d %c %d", &x, &op, &y);
	//switch (op)
	//{
	//case '+':
	//	result = x + y;
	//	break;
	//case '-':
	//	result = x - y;
	//	break;
	//case '*':
	//	result = x * y;
	//	break;
	//case '/':
	//	result = x / y;
	//	break;
	//case '%':
	//	result = x % y;
	//	break;
	//default:
	//	printf("�������� �ʴ� �������Դϴ�\n");
	//	break;
	//}
	//printf("%d %c %d=%d\n", x, op, y, result);
	////calc2.c

	//int i = 1;
	//loop:
	//printf("%d * %d=%d\n", 3, i, 3 * i);
	//i++;
	//if (i == 10) goto end;
	//goto loop;
	//end:
	////goto.c

	//int a, b, c;
	//printf("�ﰢ���� ������ �Է�");
	//scanf("%d%d%d", &a, &b, &c);
	//if ((a + b) > c && (b + c) > a && (a + c) > b)
	//{
	//	printf("�ùٸ� �ﰢ��\n");
	//}
	//else
	//{
	//	printf("�ùٸ��� ���� �ﰢ��\n");
	//}
	////proper_tri.c

	return 0;
	
}