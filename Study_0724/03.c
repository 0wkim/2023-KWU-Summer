#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findMinMax(int size, int* arr, int* min, int* max) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[i]) {
				int sort = arr[i];
				arr[i] = arr[j];
				arr[j] = sort;
			} 
		}
	}

	*min = arr[0];
	*max = arr[size - 1];
}

int main()
{
	int size;
	int min = 0;
	int max = 0;

	printf("배열 크기 입력: ");
	scanf("%d", &size);

	int arr[100];
	printf("정수 배열 입력: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	findMinMax(size, arr, &min, &max);

	printf("최솟값: %d\n", min);
	printf("최댓값: %d\n", max);

	return 0;
}