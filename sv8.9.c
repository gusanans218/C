	#include <stdio.h>
	int main(void)
	{

	//int x = 10, y = 10;
	//printf("x=%d\n", x);
//printf("++x의 값=%d\n", ++x);
//printf("x=%d\n\n", x);
//printf("y=%d\n", y);
//printf("y++의 값=%d\n", y++);
//printf("y=%d\n", y);
////indec.c

	//int user, change = 0;
	//int price, c5000, c1000, c500, c100;
	//printf("물건 값 입력");
	//scanf("%d", &price);
	//printf("사용자가 낸 돈");
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
	//printf("오천원권: %d장\n", c5000);
	//printf("천원권: %d장\n", c1000);
	//printf("오백원동전: %d장\n", c500);
	//printf("백원동전: %d장\n", c100);
	////change.c

	//int x, y;
	//x = 1;
	//printf("수식 x+1의 값은 %d\n", x + 1);
	//printf("수식 y=10+(x+2+7)의 값은 %d\n", y = 10 + (x = 2 + 7));
	//printf("수식 y=x=3의 값은 %d\n", y = x = 3);
	////assignment.c

	//int x = 10, y = 10, z = 33;
//x += 1;
//y *= 2;
//z %= 10 + 20;
//printf("x=%d y=%d z=%d\n", x, y, z);
////abbr.c

	//int x, y;
//printf("두개의 정수를 입력하시오: ");
//scanf("%d%d", &x, &y);
//printf("x ==y의 결과값 : %d\n", x == y);
//printf("x !=y의 결과값 : %d\n", x != y);
//printf("x  >y의 결과값 : %d\n", x > y);
//printf("x  <y의 결과값 : %d\n", x < y);
//printf("x >=y의 결과값 : %d\n", x >= y);
//printf("x <=y의 결과값 : %d\n", x <= y);
////relational.c

	//int x, y;
	//printf("두개의 정수를 입력하시오 : ");
	//scanf("%d%d", &x, &y);
	//printf("%d && %d의 결과값 %d\n", x, y, x&& y);
	//printf("%d || %d의 결과값 %d\n", x, y, x || y);
	//printf("!%d의 결과값: %d\n", x, !x);
	////logic.c

	//int year, result;
	//printf("연도를 입력");
	//scanf("%d", &year);
	//result = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
	//printf("result=%d\n", result);
	////leapyear.cpp

	//int x, y;
	//printf("첫번째 수=");
	//scanf("%d", &x);
	//printf("두번째 수=");
	//scanf("%d", &y);
	//printf("큰 수=%d\n", (x > y) ? x : y);
	//printf("작은 수 =%d\n", (x < y) ? x : y);
	////condition.c

	//unsigned int num;
	//printf("10진수");
	//scanf("%u", &num);
	//unsigned int mask = 1 << 7;
	//printf("2진수");
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
	//printf("암호화된 문자 %c\n", encrpted_data);
	//char orig_data;
	//orig_data = encrpted_data ^ key;
	//printf("원래의 데이터 =%c\n", orig_data);
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
	//printf("화씨온도를 입력하시오: ");
	//scanf("%lf", &f_temp);
	//c_temp = 5.0 / 9.0 * (f_temp - 32);
	//printf("섭씨온도는 %f입니다\n", c_temp);
	////temperature.c

	//int number;
	//printf("정수를 입력하시오");
	//scanf("%d", &number);
	//if (number > 0)
	//	printf("양수입니다\n");
	//printf("입력된 값은 %d입니다\n", number);
	////if1.c

	//int number;
//printf("정수를 입력하시오:");
//scanf("%d", &number);
//if (number < 0)
//	number = -number;
//printf("절대값은 %d입니다\n", number);
////if2.c

	//int n, d, result;
//printf("분자를 입력");
//scanf("%d", &n);
//printf("분모를 입력");
//scanf("%d", &d);
//if (d == 0)
//{
//	printf("0으로 나눌수는 없습니다\n");
//}
//
//else {
//	result = n / d;
//	printf("결과는 %d입니다\n", result);
//}
////if_else

	//int year;
	//printf("연도를 입력하시오: ");
	//scanf("%d", &year);
	//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//printf("%d년은 윤년입니다\n", year);
	//else
	//printf("%d년은 윤년이 아닙니다\n", year);
	////leap_year.c

	//char ch;
//printf("문자를 입력");
//scanf("%c", &ch);
//if (ch >= 'A' && ch <= 'Z')
//printf("%c는 대문자입니다\n", ch);
//else if (ch >= 'a' && ch <= 'z')
//printf("%c는 소문자입니다\n", ch);
//else if (ch >= '0' && ch <= '9')
//printf("%c는 숫자입니다\n", ch);
//else
//printf("%c는 기타문자입니다\n", ch);
////charclass.c

	//char op;
//int x, y, result;
//printf("수식을 입력하시오 (예:2+5)/n");
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
//printf("지원되지 않는 연산자\n");
//printf("%d %c %d=%d\n", x, op, y, result);
////calc1.c

	//double a, b, c, dis;
	//printf("계수 a, 계수 b, 계수 c를 차례대로 입력");
	//scanf("%lf %lf %lf", &a, &b, &c);
	//if (a == 0)
	//	printf("방정식의 근은 %f입니다", -c / b);
	//else
	//{
	//	dis = b * b - 4.0 * a * c;
	//	if (dis >= 0)
	//	{
	//		printf("방정식의 근은 %f입니다\n", (-b + sqrt(dis)) / (2.0 * a));
	//		printf("방정식의 근은 %f입니다\n", (-b - sqrt(dis)) / (2.0 * a));
	//	}
	//	else
	//		printf("실근이 존재하지 않습니다\n");
	//}
	////quad_eq.c

	//int month, days;
	//printf("달을 입력하시오:");
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
	//printf("%d월의 일수는 %d입니다\n", month, days);
	////days_in_month.c

	//char op;
	//int x, y, result;
	//printf("수식을 입력하시오(예:2+5):\n");
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
	//	printf("지원되지 않는 연산자입니다\n");
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
	//printf("삼각형의 세변을 입력");
	//scanf("%d%d%d", &a, &b, &c);
	//if ((a + b) > c && (b + c) > a && (a + c) > b)
	//{
	//	printf("올바른 삼각형\n");
	//}
	//else
	//{
	//	printf("올바르지 않은 삼각형\n");
	//}
	////proper_tri.c

	return 0;
	
}