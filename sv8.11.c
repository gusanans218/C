
	//int n;
	//int i = 1;
	//printf("출력하고 싶은 단: ");
	//scanf("%d", &n);
	//while (i <= 9)
	//{
	//	printf("%d*%d=%d\n", n, i, n * i);
	//	i++;
	//}
	//return 0;
	////gugu.c

	//int n;
	//printf("===============\n");
	//printf(" n n의 제곱\n");
	//printf("===============\n");
	//n = 1;
	//while (n <= 10)
	//{
	//	printf("%5d %5d\n", n, n * n);
	//	n++;
	//}
	////square.c

	//int i, n, sum;
	//printf("정수를 입력하시오 : ");
	//scanf("%d", &n);
	//i = 1;
	//sum = 0;
	//while (i <= n)
	//{
	//	sum += i;
	//	i++;
	//}
	//printf("1부터 %d까지의 합은 %d입니다\n", n, sum);
	////sum.c

	//int i, n, sum;
	//i = 0;
	//sum = 0;
	//while (i < 5)
	//{
	//	printf("값을 입력하시오 : ");
	//	scanf("%d", &n);
	//	sum = sum + n;
	//	i++;
	//}
	//printf("합계는 %d입니다\n", sum);
	////sum1.c

	//int grade, n;
	//double sum, average;
	//n = 0;
	//sum = 0;
	//grade = 0;
	//printf("종료하려면 음수를 입력하시오\n");
	//while (grade >= 0)
	//{
	//	printf("성적을 입력하시오 : ");
	//	scanf("%d", &grade);
	//	sum += grade;
	//	n++;
	//}
	//sum = sum - grade;
	//n--;
	//average = sum / n;
	//printf("성적의 평균은 %f입니다\n", average);
	////average.c

	//int x, y, r;
	//printf("두개의 정수를 입력하시오(큰 수, 작은 수):");
	//scanf("%d%d", &x, &y);
	//while (y != 0)
	//{
	//	r = x % y;
	//	x = y;
	//	y = r;
	//}
	//printf("최대 공약수는 %d입니다\n", x);
	////gcd.c

	//int halflife;
	//double initial;
	//double current;
	//int years = 0;
	//printf("반감기를 입력하시오(년): ");
	//scanf("%d", &halflife);
	//initial = 100.0;
	//current = initial;
	//while (current>initial/10.0)
	//{
	//	years += halflife;
	//	current = current / 2.0;
	//	printf("%d년 후에 남은 양=%f\n", years, current);
	//}
	//printf("1/10이하로 되기까지 걸린 시간 =%d년\n", years);
	////radio.c

	//int i = 0;
	//do {
	//	printf("1--새로 만들기\n");
	//	printf("2--파일 열기\n");
	//	printf("3--파일 닫기\n");
	//	printf("하나를 선택하시오:");
	//	scanf("%d", &i);
	//} while (i < 1 || i>3);
	//	printf("선택된 메뉴%d\n", i);
	//	//menu.c

	//int answer = 59;
	//int guess;
	//int tries = 0;
	//do {
	//	printf("정답을 추측하여 보시오: ");
	//	scanf("%d", &guess);
	//	tries++;
	//	if (guess > answer)
	//		printf("제시한 정수가 높습니다\n");
	//	if (guess < answer)
	//		printf("제시한 정수가 낮습니다\n");
	//} while (guess != answer);
	//printf("축하합니다. 시도횟수=%d\n", tries);
	////game.c

	//int sum;
	//sum = 0;
	//for (int i = 1; i <= 10; i++)
	//	sum += i;
	//printf("1부터 10까지의 정수의 합=%d\n", sum);
	////sum_for.c

	//int n;
	//printf("정수를 입력하시오: ");
	//scanf("%d", &n);
	//printf("=============\n");
	//printf("i   i의 세제곱\n");
	//printf("=============\n");
	//for (int i = 1; i <= n; i++)
	//	printf("%5d %5d\n", i, i * i * i);
	////cubing.c

	//printf("**********\n");
	//for (int i = 0; i < 5; i++)
	//	printf("*        *\n");
	//printf("**********\n");
	////draw_box.c

	//long fact = 1;
	//int n;
	//printf("정수를 입력하시오: ");
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++)
	//	fact = fact * i;
	//printf("%d!은 %d입니다\n", n, fact);
	////factorial.c

	//for (int a = 1; a <= 100; a++)
	//{
	//	for (int b = 1; b <= 100; b++)
	//	{
	//		for (int c = 1; c <= 100; c++)
	//		{
	//			if ((a * a + b * b) == c * c)
	//			printf("%d %d %d\n", a, b, c);
	//        }
	//	}
	//}
	////add1.c

	//double v;
	//while (1)
	//{
	//	printf("실수 값을 입력하시오");
	//	scanf("%lf", &v);
	//	if (v < 0.0)
	//		break;
	//	printf("%lf의 제곱근은 %f입니다\n", v, sqrt(v));
	//}
	////square_root.c

	//char letter;
	//while (1)
	//{
	//	printf("소문자를 입력하시오: ");
	//	scanf("%c", &letter);
	//	if (letter == 'Q')
	//		break;
	//	if (letter < 'a' || letter>'z')
	//		continue;
	//	letter -= 32;
	//	printf("변환된 대분자는 %c입니다\n", letter);
	//}
	////to_upper.c

	//int x, y, answer, i;
	//srand(time(NULL));
	//for (i = 0; i < 10; i++)
	//{
	//	x = rand() % 10;
	//	y = rand() % 10;
	//	printf("%d+ %d =", x, y);
	//	scanf("%d", &answer);
	//	if (x + y == answer)
	//		printf("맞았습니다\n");
	//	else
	//		printf("틀렸습니다\n");
	//}
	////mathprob.c

	//int initial_money = 50;
	//int goal = 250;
	//int i;
	//int wins = 0;
	//for (i = 0; i < 100; i++)
	//{
	//	int cash = initial_money;
	//	while (cash > 0 && cash < goal)
	//	{
	//		if (((double)rand() / RAND_MAX) < 0.5) cash++;
	//		else cash--;
	//	}
	//	if (cash == goal) wins++;
	//}
	//printf("초기 금액 $%d\n", initial_money);
	//printf("목표 금액 $%d\n", goal);
	//printf("100번 중에서 %d번 성공\n", wins);
	////gambler.c
	
	//HDC hdc = GetWindowDC(GetForegroundWindow());
	//int i;
	//for (i = 0; i < 100; i++)
	//{
	//	int x = rand() % 500;
	//	int y = rand() % 300;
	//	int w = rand() % 100;
	//	int h = rand() % 100;
	//	Rectangle(hdc, x, y, x + w, y + h);
	//	Sleep(100);
	//}
	////draw_rect.c

	//double divisor, divident, sum;
	//int loop_count;
	//divisor = 1.0;
	//divident = 4.0;
	//sum = 0.0;
	//printf("반복횟수: ");
	//scanf("%d", &loop_count);
	//while (loop_count > 0)
	//{
	//	sum = sum + divident / divisor;
	//	divident = -1.0 * divident;
	//	divisor = divisor + 2;
	//	loop_count--;
	//}
	//printf("Pi = %f\n", sum);
	////pi구하기

	//#include <stdio.h>
//int get_integer()
//{
//	int value;
//	printf("정수를 입력하시오: ");
//	scanf("%d", &value);
//	return value;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//	int x = get_integer();
//	int y = get_integer();
//	int sum = add(x, y);
//	printf("두수의 합은 %d입니다\n", sum);
//	//odd.c
//	return 0;
//}

	//#include <stdio.h>
//int factorial(int n)
//{
//	long result = 1;
//	for (int i = 1; i <= n; i++)
//		result *= i;
//	return result;
//}
//int main(void)
//{
//	int n;
//	printf("알고싶은 팩토리얼의 값은?");
//	scanf("%d", &n);
//	printf("%d!의 값은 %d입니다\n", n, factorial(n));
//	return 0;
//}//factorial.c

	//#include <stdio.h>
//void printOptions()
//{
//	printf("'c'섭씨 온도에서 화씨 온도로 변환\n");
//	printf("'f'화씨 온도에서 섭씨 온도로 변환\n");
//	printf("'q'종료\n");
//}
//double C2F(double c_temp)
//{
//	return 9.0 / 5.0 * c_temp + 32;
//}
//double F2C(double f_temp)
//{
//	return(f_temp - 32.0) * 5.0 / 9.0;
//}
//int main(void)
//{
//	char choice;
//	double temp;
//	while (1)
//	{
//		printOptions();
//		printf("메뉴에서 선택하세요");
//		choice = getchar();
//		if (choice == 'q') break;
//		else if (choice == 'c') {
//			printf("섭씨온도: ");
//			scanf("%lf", &temp);
//			printf("화씨온도: %lf\n", C2F(temp));
//		}
//		else if (choice == 'f')
//		{
//			printf("화씨온도");
//			scanf("%lf", &temp);
//			printf("섭씨온도 %lf\n", F2C(temp));
//		}
//		getchar();
//	}
//	return 0;
//}//temperature.c