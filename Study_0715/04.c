#include <stdio.h>

int main_04()
{
	int i = 1;
	int sum = 0;

	while (i <= 100) {
		if ((i % 3 == 0) || (i % 4 == 0)) {
			sum += i;
		}
		i++;
	}

	printf("1���� 100������ ���� �� 3�� ����̰ų� 4�� ����� ������ �� : %d", sum);

	return 0;
}