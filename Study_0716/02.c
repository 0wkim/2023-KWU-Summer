#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_02()
{
	char string[100] = { 0 };
	char add[100] = { 0 };
	printf("영문 문자열을 입력하시오 : ");

	scanf("%[^\n]", add);
	// scanf_s("%99[^\n]", add, sizeof(add));

	printf("입력된 문자열 : %s\n", add);

	for (int i = 0; add[i] != '\0'; i++) {
		if (add[i] >= 'a' && add[i] <= 'z') { // i 값이 아니고 add[i]
			add[i] -= 32;
		}
		else if (add[i] >= 'A' && add[i] <= 'Z') {
			add[i] += 32;
		}
	}

	printf("수정된 문자열 : %s\n", add);

	return 0;
}