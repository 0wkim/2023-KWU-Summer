#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 버블 정렬 (효율성 높음)
void sortArray02(int size, int* arr) {
	for (int i = 0; i < size - 1; i++) {
		// 큰 값이 오른쪽으로 이동
		for (int j = 0; j < size - i - 1; j++) { // 가장 큰 값은 비교할 필요 없음
			if (arr[j] > arr[j + 1]) {
				// 두 정수 교환
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
	printf("배열 크기 입력 : ");
	scanf("%d", &size);

	int arr[100];
	printf("정수 배열 입력 : ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	sortArray02(size, arr);

	printf("정렬된 배열 : ");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");

	return 0;
}
