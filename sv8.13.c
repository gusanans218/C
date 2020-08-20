	//#include <stdio.h>
//#define ROWS 3
//#define COLS 3
//
//int main(void)
//{
//	int A[ROWS][COLS] = { {2,3,0},{8,9,1}, {7,0,5} };
//	int B[ROWS][COLS] = { {1,0,0}, {1,0,0},{1,0,0} };
//	int C[ROWS][COLS];
//	int r, c;
//	for (r = 0; r < ROWS; r++)
//		for (c = 0; c < COLS; c++)
//			C[r][c] = A[r][c] + B[r][c];
//	for (r = 0; r < ROWS; r++)
//	{
//		for (c = 0; c < COLS; c++)
//			printf("%d ", C[r][c]);
//		printf("\n");
//	}
//
//	return 0;
//}//matrix.c

	//#include <stdio.h>
//#define YEARS 3
//#define PRODUCTS 5
//int sum(int scores[YEARS][PRODUCTS]);
//int main(void)
//{
//	int sales[YEARS][PRODUCTS] = { {1,2,3}, {4,5,6}, {7,8,9} };
//	int total_sale;
//	total_sale = sum(sales);
//	printf("총 매출은 %d입니다\n", total_sale);
//	return 0;
//}
//int sum(int scores[YEARS][PRODUCTS])
//{
//	int y, p;
//	int total = 0;
//	for (y = 0; y < YEARS;y++)
//		for (p = 0; p < PRODUCTS; p++)
//			total += scores[y][p];
//	return total;
//}//sales.c

	//#include <stdio.h>
//void display(int image[8][16])
//{
//	for (int r = 0; r < 8; r++)
//	{
//		for (int c = 0; c < 16; c++) {
//			if (image[r][c] == 0)
//				printf("*");
//			else
//				printf("_");
//		}
//		printf("\n");
//	}
//}
//void inverse(int img[8][16])
//{
//	for (int r = 0; r < 8; r++) {
//		for (int c = 0; c < 16; c++) {
//			if (img[r][c] == 0)
//				img[r][c] = 1;
//			else
//				img[r][c] = 0;
//		}
//	}
//}
//int main(void)
//{
//	int image[8][16] = {
//		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
//		{1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1},
//		{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},
//		{1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1},
//		{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},
//		{1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1},
//		{1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1},
//		{1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1} };
//	printf("변환전 이미지\n");
//	display(image);
//	inverse(image);
//	printf("\n\n변환 후 이미지\n");
//	display(image);
//	return 0;
//}//image_proc.c

	//#include <stdio.h>
//int main(void)
//{
//	char board[3][3];
//	int x, y, k, i;
//	for (x = 0; x < 3; x++)
//		for (y = 0; y < 3; y++)board[x][y] = '  ';
//	for (k = 0; k < 9; k++) {
//		printf("(x,y)좌표: ");
//		scanf("%d %d", &x, &y);
//		board[x][y] = (k % 2 == 0) ? 'X' : 'O';
//		for (i = 0; i < 3; i++) {
//			printf("---|---|---\n");
//			printf("%c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//			}
//		printf("---|---|---\n");
//	}
//	return 0;
//}//tic+tac_toc.c

	//#include <string.h>
//#include <stdio.h>
//int main(void)
//{
//	char s1[80];
//	char s2[80];
//	int result;
//	printf("첫번째 단어를 입력하시오: ");
//	scanf("%s", s1);
//	printf("두번째 단어를 입력하시오: ");
//	scanf("%s", s2);
//	result = strcmp(s1, s2);
//	if (result < 0)
//		printf("%s가 %s보다 앞에 있습니다\n", s1, s2);
//	else if(result==0)
//		printf("%s가 %s보다 같습니다\n", s1, s2);
//	else
//		printf("%s가 %s보다 앞에 있습니다\n", s1, s2);
//	return 0;
//}//strimp.c

	//#include <string.h>
//#include <stdio.h>
//int main(void)
//{
//	char s[] = "language";
//	char c = 'g';
//	char* p;
//	int loc;
//	p = strchr(s, c);
//	loc = (int)(p - s);
//	if (p != NULL)
//		printf("%s에서 첫번째 %c가 %d에서 발견되었음\n", s, c, loc);
//	else
//		printf("%c가 발견되지 않았음\n", c);
//}//strchr.c

	//#include <string.h>
//#include <stdio.h>
//char s[] = "Man is immortal, because he has a soul";
//char seps[] = " ,\t\n";
//char* token;
//int main(void)
//{
//	token = strtok(s, seps);
//	while (token != NULL)
//	{
//		printf("토큰: %s\n", token);
//		token = strtok(NULL, seps);
//	}
//}//strok.c