#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_02()
{
	char string[100] = { 0 };
	char add[100] = { 0 };
	printf("���� ���ڿ��� �Է��Ͻÿ� : ");

	scanf("%[^\n]", add);
	// scanf_s("%99[^\n]", add, sizeof(add));

	printf("�Էµ� ���ڿ� : %s\n", add);

	for (int i = 0; add[i] != '\0'; i++) {
		if (add[i] >= 'a' && add[i] <= 'z') { // i ���� �ƴϰ� add[i]
			add[i] -= 32;
		}
		else if (add[i] >= 'A' && add[i] <= 'Z') {
			add[i] += 32;
		}
	}

	printf("������ ���ڿ� : %s\n", add);

	return 0;
}