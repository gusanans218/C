#include <stdio.h>
void func1(int* ptr);
int main()
{
	int arr[] = { 25,36,19,39,42,15};
	int i, k;
	k = sizeof(arr)/sizeof(arr[0]);//4����Ʈ�� ������ �� ������ ����
	printf("main\n");
	for (i = 0; i < k; i++)
	{
		printf("%d", *(arr + i));//��
		printf("%p\n", arr + i);
	}
	func1(&arr[0],k);//�ּҰ� ������, �迭ũ��
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
		*(ptr+i)+=1;//�ּ� ����Ű�� ���� ���� ��
		printf("%d", (ptr + i));
		printf("%p\n", ptr + i);
	}
	
}