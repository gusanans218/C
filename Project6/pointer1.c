#include <stdio.h>
//�����ʹ� 1) ����, 2) ���� 3)�� ���(*������ ����)
int main()
{
	int a = 10;
	int* ap; //������ ���� ����(�ּҸ� ����)
	ap = &a;//����
	printf("%d %p\n", a, &a);
	printf("%p %p\n", ap, &ap);
	printf("%d %p\n", *ap, &a);//*ap�� *�� ���� ����Ų��.

}