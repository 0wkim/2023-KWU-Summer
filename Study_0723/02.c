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
	printf("�� ���� �Է� : ");
	scanf("%d %d", &num1, &num2);

	printf("Swap �� : num1 = %d, num2 = %d\n", num1, num2);
	swap(&num1, &num2); // �ּҰ� ����
	printf("Swap �� : num1 = %d, num2 = %d\n", num1, num2);

	return 0;
}

/*
	swap�Լ��� num1�� num2�� �޸� �ּҰ��� �̿��Ѵ�.
	swap �Լ������� �����͸� �̿��Ͽ� �޸� �ּҸ� �����Ѵ�.
	change��� ������ num1�� ���� �ӽ÷� �����ϰ�,
	num1�� ���� num2�� ���� �����Ѵ�.
	�ٽ� num2�� ���� change, �� num1�� ���� �����Ͽ� �� ������ �ٲ۴�.
*/