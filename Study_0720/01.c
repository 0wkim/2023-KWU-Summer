#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int stringCompare(const char* str1, const char* str2) {
	// ���ڿ��� ���� �� ���� �ݺ�
	while (*str1 != '\0' && *str2 != '\0') {
		if (*str1 != *str2) {
			return str1 - str2; // �ƽ�Ű �ڵ��� �� ���̸� ��ȯ
		}

		str1++; // �ּҰ� ����
		str2++;

		// *str�� ����� ��
		//  str�� �޸� �ּ�
	}
}

int main_01()
{
	char string1[100] = { 0 };
	char string2[100] = { 0 };

	printf("ù ��° ���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", string1);
	printf("�� ��° ���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", string2);

	if (stringCompare(string1, string2) < 0) {
		printf("ù ��° ���ڿ��� ���� �´�.\n");
	}
	else if (stringCompare(string1, string2) > 0) {
		printf("�� ��° ���ڿ��� ���� �´�.\n");
	}
	else {
		printf("���� ���ڿ��̴�.\n");
	}
}