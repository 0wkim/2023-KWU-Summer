#include <stdio.h>

int main_03()
{
	int num;
	scanf_s("%d", &num);

	if (num == 2) {
		printf("%d�� �Ҽ��Դϴ�.", num);
	}
	else if (num < 2) {
		printf("%d�� �Ҽ��� �ƴմϴ�.", num);
	}
	else {
		int isPrime = 1; // �Ҽ����� �Ǻ� (1�̸� �Ҽ�, 0�̸� �Ҽ� X)

		for (int i = 2; i < num; i++) {
			// i <= num / 2 : num�� ����� num / 2�� ���� �ʱ� ������ ȿ�������� ����ϱ� �����̴�.
			if (num % i == 0) {
				isPrime = 0;
				break;
			}
		}

		if (isPrime == 1) {
			printf("%d�� �Ҽ��Դϴ�.", num);
		}
		else {
			printf("%d�� �Ҽ��� �ƴմϴ�.", num);
		}
	}

	return 0;
}