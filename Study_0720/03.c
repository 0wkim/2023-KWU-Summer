#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>


int main_03()
{
	int* numA;
	int number;
	printf("정수형 변수를 입력하세요. : ");
	scanf("%d", &number);

	numA = &number;

	*numA = number * 2;

	printf("두 배 증가된 값 : %d", *numA);

}