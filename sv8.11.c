
	//int n;
	//int i = 1;
	//printf("����ϰ� ���� ��: ");
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
	//printf(" n n�� ����\n");
	//printf("===============\n");
	//n = 1;
	//while (n <= 10)
	//{
	//	printf("%5d %5d\n", n, n * n);
	//	n++;
	//}
	////square.c

	//int i, n, sum;
	//printf("������ �Է��Ͻÿ� : ");
	//scanf("%d", &n);
	//i = 1;
	//sum = 0;
	//while (i <= n)
	//{
	//	sum += i;
	//	i++;
	//}
	//printf("1���� %d������ ���� %d�Դϴ�\n", n, sum);
	////sum.c

	//int i, n, sum;
	//i = 0;
	//sum = 0;
	//while (i < 5)
	//{
	//	printf("���� �Է��Ͻÿ� : ");
	//	scanf("%d", &n);
	//	sum = sum + n;
	//	i++;
	//}
	//printf("�հ�� %d�Դϴ�\n", sum);
	////sum1.c

	//int grade, n;
	//double sum, average;
	//n = 0;
	//sum = 0;
	//grade = 0;
	//printf("�����Ϸ��� ������ �Է��Ͻÿ�\n");
	//while (grade >= 0)
	//{
	//	printf("������ �Է��Ͻÿ� : ");
	//	scanf("%d", &grade);
	//	sum += grade;
	//	n++;
	//}
	//sum = sum - grade;
	//n--;
	//average = sum / n;
	//printf("������ ����� %f�Դϴ�\n", average);
	////average.c

	//int x, y, r;
	//printf("�ΰ��� ������ �Է��Ͻÿ�(ū ��, ���� ��):");
	//scanf("%d%d", &x, &y);
	//while (y != 0)
	//{
	//	r = x % y;
	//	x = y;
	//	y = r;
	//}
	//printf("�ִ� ������� %d�Դϴ�\n", x);
	////gcd.c

	//int halflife;
	//double initial;
	//double current;
	//int years = 0;
	//printf("�ݰ��⸦ �Է��Ͻÿ�(��): ");
	//scanf("%d", &halflife);
	//initial = 100.0;
	//current = initial;
	//while (current>initial/10.0)
	//{
	//	years += halflife;
	//	current = current / 2.0;
	//	printf("%d�� �Ŀ� ���� ��=%f\n", years, current);
	//}
	//printf("1/10���Ϸ� �Ǳ���� �ɸ� �ð� =%d��\n", years);
	////radio.c

	//int i = 0;
	//do {
	//	printf("1--���� �����\n");
	//	printf("2--���� ����\n");
	//	printf("3--���� �ݱ�\n");
	//	printf("�ϳ��� �����Ͻÿ�:");
	//	scanf("%d", &i);
	//} while (i < 1 || i>3);
	//	printf("���õ� �޴�%d\n", i);
	//	//menu.c

	//int answer = 59;
	//int guess;
	//int tries = 0;
	//do {
	//	printf("������ �����Ͽ� ���ÿ�: ");
	//	scanf("%d", &guess);
	//	tries++;
	//	if (guess > answer)
	//		printf("������ ������ �����ϴ�\n");
	//	if (guess < answer)
	//		printf("������ ������ �����ϴ�\n");
	//} while (guess != answer);
	//printf("�����մϴ�. �õ�Ƚ��=%d\n", tries);
	////game.c

	//int sum;
	//sum = 0;
	//for (int i = 1; i <= 10; i++)
	//	sum += i;
	//printf("1���� 10������ ������ ��=%d\n", sum);
	////sum_for.c

	//int n;
	//printf("������ �Է��Ͻÿ�: ");
	//scanf("%d", &n);
	//printf("=============\n");
	//printf("i   i�� ������\n");
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
	//printf("������ �Է��Ͻÿ�: ");
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++)
	//	fact = fact * i;
	//printf("%d!�� %d�Դϴ�\n", n, fact);
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
	//	printf("�Ǽ� ���� �Է��Ͻÿ�");
	//	scanf("%lf", &v);
	//	if (v < 0.0)
	//		break;
	//	printf("%lf�� �������� %f�Դϴ�\n", v, sqrt(v));
	//}
	////square_root.c

	//char letter;
	//while (1)
	//{
	//	printf("�ҹ��ڸ� �Է��Ͻÿ�: ");
	//	scanf("%c", &letter);
	//	if (letter == 'Q')
	//		break;
	//	if (letter < 'a' || letter>'z')
	//		continue;
	//	letter -= 32;
	//	printf("��ȯ�� ����ڴ� %c�Դϴ�\n", letter);
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
	//		printf("�¾ҽ��ϴ�\n");
	//	else
	//		printf("Ʋ�Ƚ��ϴ�\n");
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
	//printf("�ʱ� �ݾ� $%d\n", initial_money);
	//printf("��ǥ �ݾ� $%d\n", goal);
	//printf("100�� �߿��� %d�� ����\n", wins);
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
	//printf("�ݺ�Ƚ��: ");
	//scanf("%d", &loop_count);
	//while (loop_count > 0)
	//{
	//	sum = sum + divident / divisor;
	//	divident = -1.0 * divident;
	//	divisor = divisor + 2;
	//	loop_count--;
	//}
	//printf("Pi = %f\n", sum);
	////pi���ϱ�

	//#include <stdio.h>
//int get_integer()
//{
//	int value;
//	printf("������ �Է��Ͻÿ�: ");
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
//	printf("�μ��� ���� %d�Դϴ�\n", sum);
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
//	printf("�˰���� ���丮���� ����?");
//	scanf("%d", &n);
//	printf("%d!�� ���� %d�Դϴ�\n", n, factorial(n));
//	return 0;
//}//factorial.c

	//#include <stdio.h>
//void printOptions()
//{
//	printf("'c'���� �µ����� ȭ�� �µ��� ��ȯ\n");
//	printf("'f'ȭ�� �µ����� ���� �µ��� ��ȯ\n");
//	printf("'q'����\n");
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
//		printf("�޴����� �����ϼ���");
//		choice = getchar();
//		if (choice == 'q') break;
//		else if (choice == 'c') {
//			printf("�����µ�: ");
//			scanf("%lf", &temp);
//			printf("ȭ���µ�: %lf\n", C2F(temp));
//		}
//		else if (choice == 'f')
//		{
//			printf("ȭ���µ�");
//			scanf("%lf", &temp);
//			printf("�����µ� %lf\n", F2C(temp));
//		}
//		getchar();
//	}
//	return 0;
//}//temperature.c