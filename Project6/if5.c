#include <stdio.h>
int main()
{
	float w, h, bmi;
	printf("키, 몸무게 입력 : ");
		scanf("%f%f", &h, &w);
	bmi = w / (h * 0.01 * h * 0.01);
	printf("bmi = %.2f\n", bmi);
	if (bmi >= 23)
		printf("과체중");
	else if (bmi >= 18.5)
		printf("정상");
	else
		printf("저체중");
	return 0;
}