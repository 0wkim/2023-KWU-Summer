#include <stdio.h>

int main_02()
{
	int number;
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &number);

	switch (number) {
		case 1 :
			printf("�Է��Ͻ� ���ڴ� 1�Դϴ�.");
			break;
		case 2 :
			printf("�Է��Ͻ� ���ڴ� 2�Դϴ�.");
			break;
		case 3 :
			printf("�Է��Ͻ� ���ڴ� 3�Դϴ�.");
			break;
		default:
			printf("�Է��Ͻ� ���ڴ� 1,2,3�� �ƴմϴ�.");
	}

	return 0;
}