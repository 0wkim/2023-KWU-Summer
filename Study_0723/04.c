#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int num) {
	if (num < 2) {
		return 0; // 1 ���ϴ� �Ҽ��� �ƴ�
	}

	// 2 �̻��� ���
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}

	// ���� ���ǿ� ��� �ش����� ���� ���, �� �Ҽ��� ���
	return 1;
}

int main_04()
{
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);

	if (isPrime(num)) {
		printf("%d�� �Ҽ��Դϴ�.\n", num);
	}
	else {
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", num);
	}

	return 0;
}
