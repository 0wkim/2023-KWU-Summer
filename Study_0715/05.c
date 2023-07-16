#include <stdio.h>

int main_05()
{
	int num;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	do {
		printf("%d ", num);
		num--;
	} while (num > 0);

	return 0;
}