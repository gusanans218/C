#include <stdio.h>
int main()
{
	float w, h, bmi;
	printf("Ű, ������ �Է� : ");
		scanf("%f%f", &h, &w);
	bmi = w / (h * 0.01 * h * 0.01);
	printf("bmi = %.2f\n", bmi);
	if (bmi >= 23)
		printf("��ü��");
	else if (bmi >= 18.5)
		printf("����");
	else
		printf("��ü��");
	return 0;
}