#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void addStrings(char* str1, char* str2, char* result) {
	int index = 0;

	for (int i = 0; i < 100; i++) {
		if(str1[i] != '\0') {
			result[index] = str1[i];
			index++;
		}
		if (str1[i] == '\0') {
			break;
		}
	}

	result[index] = ' ';
	index++;

	for (int i = 0; i < 100; i++) {
		if(str2[i] != '\0') {
			result[index] = str2[i];
			index++;
		}
		if (str2[i] == '\0') {
			break;
		}
	}

	result[index] = '\0';
}

int main_01()
{
	char str1[100], str2[100], result[200];
	printf("첫 번째 문자열 입력 : ");
	scanf("%s", str1);
	printf("두 번째 문자열 입력 : ");
	scanf("%s", str2);

	addStrings(str1, str2, result);

	printf("결과 문자열 : %s\n", result);

	return 0;
}