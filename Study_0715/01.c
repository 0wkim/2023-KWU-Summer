#include <stdio.h>

int main_01()
{
	int number;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &number);

	switch (number % 2) {
		case 0 :
			printf("짝수입니다.");
			break;
		default :
			printf("홀수입니다.");
	}

	return 0;
}