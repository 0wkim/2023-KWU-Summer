#include <stdio.h>

int main_02()
{
	int number;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &number);

	switch (number) {
		case 1 :
			printf("입력하신 숫자는 1입니다.");
			break;
		case 2 :
			printf("입력하신 숫자는 2입니다.");
			break;
		case 3 :
			printf("입력하신 숫자는 3입니다.");
			break;
		default:
			printf("입력하신 숫자는 1,2,3이 아닙니다.");
	}

	return 0;
}