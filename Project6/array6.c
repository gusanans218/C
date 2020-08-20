#include <stdio.h>
int main()
{
	//피보나치 수열 0 1 1 2 3 5 8 13 21 34
	long long int i, fibo[20] = { 0,1 };
	/*fibo[0] = 0, fibo[1] = 1;*/
	/*fibo[2] = fibo[0] + fibo[1];
	fibo[3] = fibo[1] + fibo[2];
	fibo[4] = fibo[2] + fibo[3];*/
	for (i = 2; i <= 19; i++)
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	printf("피보나치 10개 출력 : ");
	for (i = 0; i < 20; i++)
		printf("%lld\n ", fibo[i]);



	return 0;
}