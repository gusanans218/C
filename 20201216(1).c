#include<stdio.h>
#define Web 0
#define C 1
#define Cpp 2
#define JAVA 3
int main() {
	int project[4][1000];
	char Project_Contects[4][1000][200];
	int N, K;
	int _W = 0, _C = 0, _Cpp = 0, _J = 0;
	while (1) {
		printf("������Ʈ ������ �����Ͽ��ּ��� Web : 0, C:1, C++:2,JAVA:3\n");
		scanf_s("%d", &N);
		printf("1. ������Ʈ ���� 2. ������Ʈ ���� 3. ������Ʈ ����\n");
		scanf_s("%d", &K);
		if (K == 2)
			switch (N) {
			case 0:
				printf("Web�� �����ϼ̽��ϴ� 100�� �̳��� �Է����ּ���\n"); project[Web][_W] = 1;
				scanf_s(" %[^\n]s", Project_Contects[Web][_W++], 100);
				printf("%s\n", Project_Contects[0][0]);
				break;
			case 1:
				printf("C�� �����ϼ̽��ϴ� 100�� �̳��� �Է����ּ���\n"); project[C][_C] = 1;
				scanf_s(" %[^\n]s", Project_Contects[C][_C++], 100);
				printf("%s\n", Project_Contects[1][0]);
				break;
			case 2:
				printf("C++�� �����ϼ̽��ϴ� 100�� �̳��� �Է����ּ���\n"); project[Cpp][_Cpp] = 1;
				scanf_s(" %[^\n]s", Project_Contects[Cpp][_Cpp++], 100);
				printf("%s\n", Project_Contects[2][0]);
				break;
			case 3:
				printf("JAVA�� �����ϼ̽��ϴ� 100�� �̳��� �Է����ּ���\n"); project[JAVA][_J] = 1;
				scanf_s(" %[^\n]s", Project_Contects[JAVA][_J++], 100);
				printf("%s\n", Project_Contects[3][0]);
				break;
			}
	}
	return 0;
}