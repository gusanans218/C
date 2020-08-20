#include <stdio.h>
void func(int* ptr);
int main()
{
	int arr[5] = { 10,20,30,40,50 };
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
		printf("%p\n", &arr[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(arr+i));//주소값이 가르치는 값
		printf("%p\n", arr+i/*주소*/);
	}
	func(&arr[0]);

}
void func(int* ptr)
{
	int i;
	for (i = 0; i <5; i++)
	{
		printf("%d\n", *(ptr+i));
	}
	
}
	