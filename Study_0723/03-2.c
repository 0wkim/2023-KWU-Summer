#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� ���� (ȿ���� ����)
void sortArray02(int size, int* arr) {
	for (int i = 0; i < size - 1; i++) {
		// ū ���� ���������� �̵�
		for (int j = 0; j < size - i - 1; j++) { // ���� ū ���� ���� �ʿ� ����
			if (arr[j] > arr[j + 1]) {
				// �� ���� ��ȯ
				int sort = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = sort;
			}
		}
	}
}

int main_03_2()
{
	int size;
	printf("�迭 ũ�� �Է� : ");
	scanf("%d", &size);

	int arr[100];
	printf("���� �迭 �Է� : ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	sortArray02(size, arr);

	printf("���ĵ� �迭 : ");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");

	return 0;
}
