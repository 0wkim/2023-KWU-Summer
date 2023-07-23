#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverseString(char* str) {

	// 문자열의 크기 (sttrlen 대신 이용)
	int size = 0;
	while (str[size] != '\0') {
		size++;
	}

	// 문자열의 시작과 끝
	int start = 0;
	int end = size - 1; // 0부터 시작하기 때문에 1을 빼줘야 함

	// 문자열 뒤집기 (가운데를 기준으로 문자 교환)
	while (start < end) { 
		char change = str[start]; // 문자를 change에 임시 저장
		str[start] = str[end];    // 문자 위치 변경
		str[end] = change;        // 변경된 문자를 다시 change에 저장
		start++;
		end--;
	}
}

int main_01() 
{
	char str[100];
	printf("문자열 입력 : ");
	scanf("%s", str);

	reverseString(str);

	printf("뒤집힌 문자열 : %s\n", str);

	return 0;
}