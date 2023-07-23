#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 최솟값을 선택하여 배열 앞 부분으로 이동
void sortArray01(int size, int* arr) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i] < arr[j]) {
				// 두 정수 교환
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
	printf("배열 크기 입력 : ");
	scanf("%d", &size);

	int arr[100];
	printf("정수 배열 입력 : ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	sortArray01(size, arr);

	printf("정렬된 배열 : ");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");

	return 0;
}
