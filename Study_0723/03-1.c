#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ּڰ��� �����Ͽ� �迭 �� �κ����� �̵�
void sortArray01(int size, int* arr) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i] < arr[j]) {
				// �� ���� ��ȯ
				int sort = arr[i];
				arr[i] = arr[j];
				arr[j] = sort;
			}
		}
	} 
}

int main_03_1()
{
	int size;
	printf("�迭 ũ�� �Է� : ");
	scanf("%d", &size);

	int arr[100];
	printf("���� �迭 �Է� : ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	sortArray01(size, arr);

	printf("���ĵ� �迭 : ");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");

	return 0;
}
