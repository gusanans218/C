#include <stdio.h>
void func1(int* ptr);
int main()
{
	int arr[] = { 25,36,19,39,42,15};
	int i, k;
	k = sizeof(arr)/sizeof(arr[0]);//4바이트라서 나누면 수 개수가 나옴
	printf("main\n");
	for (i = 0; i < k; i++)
	{
		printf("%d", *(arr + i));//값
		printf("%p\n", arr + i);
	}
	func1(&arr[0],k);//주소값 보낸거, 배열크기
	/*func2(arr[0]);*/
	printf("main\n");
	for (i = 0; i < k; i++)
	{
		printf("%d", *(arr + i));
		printf("%p\n", arr + i);
	}

}
void func2(int temp)
{
	temp = 35;

}
void func1(int* ptr, int k)
{
	int i;
	printf("func1\n");
	for (i = 0; i < k; i++)
	{
		*(ptr+i)+=1;//주소 가르키는 값을 더한 것
		printf("%d", (ptr + i));
		printf("%p\n", ptr + i);
	}
	
}