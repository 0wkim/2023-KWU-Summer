#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fibonacci(int* fib) {
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i < 100; i++) {
		fib[i] = fib[i - 2] + fib[i - 1];
	}
}

int main_02()
{
	int n;
	printf("�Ǻ���ġ ���� ���� �Է�: ");
	scanf("%d", &n);

	int fib[100];
	fibonacci(fib);

	printf("�Ǻ���ġ ����: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", fib[i]);
	}
	printf("\n");

	return 0;
}