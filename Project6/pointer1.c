#include <stdio.h>
//포인터는 1) 선언, 2) 연결 3)값 출력(*포인터 변수)
int main()
{
	int a = 10;
	int* ap; //포인터 변수 선언(주소만 들어간다)
	ap = &a;//연결
	printf("%d %p\n", a, &a);
	printf("%p %p\n", ap, &ap);
	printf("%d %p\n", *ap, &a);//*ap의 *은 값을 가르킨다.

}