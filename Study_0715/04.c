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

	printf("1부터 100까지의 정수 중 3의 배수이거나 4의 배수인 수들의 합 : %d", sum);

	return 0;
}