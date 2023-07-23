#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverseString(char* str) {

	// ���ڿ��� ũ�� (sttrlen ��� �̿�)
	int size = 0;
	while (str[size] != '\0') {
		size++;
	}

	// ���ڿ��� ���۰� ��
	int start = 0;
	int end = size - 1; // 0���� �����ϱ� ������ 1�� ����� ��

	// ���ڿ� ������ (����� �������� ���� ��ȯ)
	while (start < end) { 
		char change = str[start]; // ���ڸ� change�� �ӽ� ����
		str[start] = str[end];    // ���� ��ġ ����
		str[end] = change;        // ����� ���ڸ� �ٽ� change�� ����
		start++;
		end--;
	}
}

int main_01() 
{
	char str[100];
	printf("���ڿ� �Է� : ");
	scanf("%s", str);

	reverseString(str);

	printf("������ ���ڿ� : %s\n", str);

	return 0;
}