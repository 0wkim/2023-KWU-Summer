#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* num1, int* num2) {

	int change = *num1;
	*num1 = *num2;
	*num2 = change;
}

int main_02()
{
	int num1, num2;
	printf("두 정수 입력 : ");
	scanf("%d %d", &num1, &num2);

	printf("Swap 전 : num1 = %d, num2 = %d\n", num1, num2);
	swap(&num1, &num2); // 주소값 전달
	printf("Swap 후 : num1 = %d, num2 = %d\n", num1, num2);

	return 0;
}

/*
	swap함수에 num1과 num2의 메모리 주소값을 이용한다.
	swap 함수에서는 포인터를 이용하여 메모리 주소를 저장한다.
	change라는 변수에 num1의 값을 임시로 저장하고,
	num1의 값에 num2의 값을 저장한다.
	다시 num2의 값에 change, 즉 num1의 값을 저장하여 두 정수를 바꾼다.
*/