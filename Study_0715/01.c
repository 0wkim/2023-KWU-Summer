#include <stdio.h>

int main_01()
{
	int number;
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &number);

	switch (number % 2) {
		case 0 :
			printf("¦���Դϴ�.");
			break;
		default :
			printf("Ȧ���Դϴ�.");
	}

	return 0;
}