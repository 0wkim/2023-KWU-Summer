#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int num) {
	if (num < 2) {
		return 0; // 1 이하는 소수가 아님
	}

	// 2 이상일 경우
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}

	// 위의 조건에 모두 해당하지 않을 경우, 즉 소수일 경우
	return 1;
}

int main_04()
{
	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);

	if (isPrime(num)) {
		printf("%d는 소수입니다.\n", num);
	}
	else {
		printf("%d는 소수가 아닙니다.\n", num);
	}

	return 0;
}
