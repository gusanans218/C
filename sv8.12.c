	//#include <stdio.h>
//int get_integer(void)
//{
//	int n;
//	printf("정수를 입력하시오");
//	scanf("%d", &n);
//	return n;
//}
//int is_prime(int n)
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return;
//	}
//	return 1;
//}
//int main()
//{
//	int n, result;
//	n = get_integer();
//	if (is_prime(n) == 1)
//		printf("%d값은 소수입니다\n", n);
//	else
//		printf("%d은 소수가 아닙니다\n", n);
//	return 0;
//}//소수 유무 구별

	//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	for (int i = 0; i < 6; i++)
//		printf("%d  ",1+(rand()%45));
//	printf("\n");
//	return 0;
//}//lotto1.c

	//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h>
//int coin_toss(void);
//int main(void)
//{
//	int toss;
//	int heads = 0;
//	int tails = 0;
//	srand((unsigned)time(NULL));
//	for (toss = 0; toss < 100; toss ++) {
//		if (coin_toss() == 1)
//			heads++;
//		else
//			tails++;
//	}
//	printf("동전의 앞면: %d\n", heads);
//	printf("동전의 뒷면: %d\n", tails);
//	return 0;
//}
//int coin_toss(void)
//{
//	int i = rand() % 2;
//	if (i == 0)
//		return 0;
//	else
//		return 1;
//}//동전 던지기

	//#include <stdlib.h>
//#include <stdio.h>
//#include <conio.h>
//#include <time.h>
//void disp_car(int car_number, int distance)
//{
//	int i;
//	printf("CAR #%d:", car_number);
//	for (i = 0; i < distance / 10; i++)
//		printf("*");
//	printf("\n");
//}
//int main(void)
//{
//	int i;
//	int car1_dist = 0, car2_dist = 0;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 6; i++)
//	{
//		car1_dist += rand() % 100;
//		car2_dist += rand() % 100;
//		disp_car(1, car1_dist);
//		disp_car(2, car2_dist);
//		printf("============================\n");
//		_getch();
//	}
//	return 0;
//}//racing_game.c

	//#include <Windows.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h>
//int main(void)
//{
//	int i, x, y, red, green, blue;
//	HDC hdc;
//	hdc = GetWindowDC(GetForegroundWindow());
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 10000; i++)
//	{
//		x = rand() % 300;
//		y = rand() % 300;
//		red = rand() % 256;
//		green = rand() % 256;
//		blue = rand() % 256;
//		SetPixel(hdc, x, y, RGB(red, green, blue));
//	}
//	_getch();
//	return 0;
//}//불규칙하게 점 그리기
	
	//#include <stdio.h>
//int main(void)
//{
//	int i;
//	int score[5];
//	score[0] = 10;
//	score[1] = 20;
//	score[2] = 30;
//	score[3] = 40;
//	score[4] = 50;
//	for (i = 0; i < 5; i++)
//		printf("grade[%d]=%d\n", i, score[i]);
//	return 0;
//}//score1.c

	//#include <stdio.h>
//#define STUDENTS 5
//int main(void)
//{
//	int scores[STUDENTS];
//	int sum = 0;
//	int i, average;
//	for (i = 0; i < STUDENTS; i++)
//	{
//		printf("학생들의 성적을 입력하시오: ");
//		scanf("%d", &scores[i]);
//	}
//	for (i = 0; i < STUDENTS; i++)
//		sum += scores[i];
//	average = sum / STUDENTS;
//	printf("성적 평균=%d\n", average);
//	return 0;
//}//score4.c

	//#include <stdio.h>
//int main(void)
//{
//	int scores[5] = { 31, 63, 62, 87, 14 };
//	int i;
//	for (i = 0; i < 5; i++)
//		printf("scores[%d]=%d\n", i, scores[i]);
//	return 0;
//}//scores5.c

	//#include <stdio.h>
//#define SIZE 10
//int main(void)
//{
//	char ans1;
//	int ans2, i;
//	int seats[SIZE] = { 0 };
//	while (1)
//	{
//		printf("좌석을 예약하시겠습니까(y또는 n)");
//		scanf("%c", &ans1);
//		if (ans1 == 'n');
//		break;
//		printf("====================\n");
//		printf("1 2 3 4 5 6 7 8 9 10\n");
//		printf("====================\n");
//		for (i = 0; i < SIZE; i++)
//			printf("%d", seats[i]);
//		printf("\n");
//		printf("몇 번째 좌석을 예약 하시겠습니까");
//		scanf("%d", &ans2);
//		if (seats[ans2 - 1] == 0) {
//			seats[ans2 - 1] = 1;
//			printf("예약되었습니다\n");
//		}
//		else
//			printf("이미 예약된 자리입니다\n");
//	}
//	return 0;
//}//theater.c

	//#include <stdio.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define SIZE 10
//int main(void)
//{
//	int prices[SIZE] = { 0 };
//	int i, minimum;
//	printf("-------------------------------\n");
//	printf(" 1 2 3 4 5 6 7 8 9 10 \n");
//	printf("-------------------------------\n");
//	srand((unsigned)time(NULL));
//	for (i = 0; i < SIZE; i++)
//	{
//		prices[i] = (rand() % 100) + 1;
//		printf("%-3d", prices[i]);
//	}
//	printf("\n\n");
//	minimum = prices[0];
//	for (i = 1; i < SIZE; i++)
//	{
//		if (prices[i] < minimum)
//			minimum = prices[i];
//	}
//	printf("최소값은 %d입니다\n", minimum);
//	return 0;
//}//binary_search.c

	//#include <stdio.h>
//#include <stdlib.h>
//#define ROWS 3
//#define COLS 5
//int main(void)
//{
//	int s[ROWS][COLS];
//	int i, j;
//	for (i = 0; i < ROWS; i++)
//		for (j = 0; j < COLS; j++)
//			s[i][j] = rand() % 100;
//	for (i = 0; i < ROWS; i++)
//	{
//		for (j = 0; j < COLS; j++)
//			printf("%02d ", s[i][j]);
//		printf("\n");
//	}
//	return 0;
//}//two_dim_array.c	 

	//#include <stdio.h>
//#define ROWS 3
//#define COLS 5
//int main(void)
//{
//	int a[ROWS][COLS] = { {87, 98, 80, 76, 3},{99, 98, 90, 90, 0}, {65, 68, 50, 49} };
//	int i;
//	for (i = 0; i < ROWS; i++)
//	{
//		double final_scores = a[i][0] * 0.3 + a[i][1] * 0.4 + a[i][2] * 0.2 + a[i][3] * 0.1 - a[i][4];
//		printf("학생 #%i의 최종성적=%10.2f\n", i + 1, final_scores);
//	}
//	return 0;
//}//two_dimen_array2.c