#include <stdio.h>

int main_01()
{
    int arr[10] = { 10, 23, 15, 26, 17, 37, 45, 44, 3, 11 };
    int max = arr[0];
    int min = arr[0];
    double average = 0;

    float sum = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }

        sum += arr[i];
    }

    average = sum / 10;

    printf("가장 큰 수: %d\n", max);
    printf("가장 작은 수: %d\n", min);
    printf("배열의 평균값: %f\n", average);

    return 0;
}