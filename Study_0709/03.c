#include <stdio.h>

int main_03()
{
	int num;
	scanf_s("%d", &num);

	if (num == 2) {
		printf("%d는 소수입니다.", num);
	}
	else if (num < 2) {
		printf("%d는 소수가 아닙니다.", num);
	}
	else {
		int isPrime = 1; // 소수인지 판별 (1이면 소수, 0이면 소수 X)

		for (int i = 2; i < num; i++) {
			// i <= num / 2 : num의 약수가 num / 2를 넘지 않기 때문에 효율적으로 계산하기 위함이다.
			if (num % i == 0) {
				isPrime = 0;
				break;
			}
		}

		if (isPrime == 1) {
			printf("%d는 소수입니다.", num);
		}
		else {
			printf("%d는 소수가 아닙니다.", num);
		}
	}

	return 0;
}