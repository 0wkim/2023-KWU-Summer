#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>


int main_02()
{
	int* pointer;
	int num = 1;

	pointer = &num;

	// 주소 출력 시 %p 사용
	printf("포인터가 가리키는 주소      : %p\n", pointer);
	printf("포인터가 가리키는 주소의 값 : %d\n", *pointer);
	printf("정수형 변수의 값            : %d\n", num);
	printf("정수형 변수의 주소          : %p\n", &num);
	
}