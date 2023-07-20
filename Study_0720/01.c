#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int stringCompare(const char* str1, const char* str2) {
	// 문자열이 끝날 때 까지 반복
	while (*str1 != '\0' && *str2 != '\0') {
		if (*str1 != *str2) {
			return str1 - str2; // 아스키 코드의 값 차이를 반환
		}

		str1++; // 주소값 증가
		str2++;

		// *str은 저장된 값
		//  str은 메모리 주소
	}
}

int main_01()
{
	char string1[100] = { 0 };
	char string2[100] = { 0 };

	printf("첫 번째 문자열을 입력하시오 : ");
	scanf("%s", string1);
	printf("두 번째 문자열을 입력하시오 : ");
	scanf("%s", string2);

	if (stringCompare(string1, string2) < 0) {
		printf("첫 번째 문자열이 먼저 온다.\n");
	}
	else if (stringCompare(string1, string2) > 0) {
		printf("두 번째 문자열이 먼저 온다.\n");
	}
	else {
		printf("같은 문자열이다.\n");
	}
}