#include <stdio.h>

int main_05()
{
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	do {
		printf("%d ", num);
		num--;
	} while (num > 0);

	return 0;
}