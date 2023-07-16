#include <stdio.h>

// 사용자로부터 x, y 좌표값을 입력 받는 함수
void get_coordination(int* x_point, int* y_point);

// 전달받은 좌표를 x축으로 대칭 변환하는 함수
void change_x_axis(int* x_point, int* y_point);

// 전달받은 좌표를 y축으로 대칭 변환하는 함수
void change_y_axis(int* x_point, int* y_point);

// 전달받은 좌표를 원점으로 대칭 변환하는 함수
void change_xy_axis(int* x_point, int* y_point);

// 4X4 좌표 평면을 출력하는 함수
void print_matrix(int x_point, int y_point);

// 전달받은 좌표에 대해 (2) ~ (5)을 수행하는 함수
void show_matrix(int x_point, int y_point);

int main() {
    int x_point, y_point;

    get_coordination(&x_point, &y_point);
    print_matrix(x_point, y_point);
    change_x_axis(&x_point, &y_point);
    show_matrix(x_point, y_point);
    change_y_axis(&x_point, &y_point);
    show_matrix(x_point, y_point);
    change_xy_axis(&x_point, &y_point);
    show_matrix(x_point, y_point);

    return 0;
}

// 사용자로부터 x, y 좌표값을 입력 받는 함수
void get_coordination(int* x_point, int* y_point) {
    // 입력 받기
    printf("put X coordination : ");
    scanf_s("%d", x_point);

    printf("put Y coordination : ");
    scanf_s("%d", y_point);

    // x 좌표 변환
    if (*x_point == -2) {
        *x_point = 0;
    }
    else if (*x_point == -1) {
        *x_point = 1;
    }
    else if (*x_point == 1) {
        *x_point = 2;
    }
    else if (*x_point == 2) {
        *x_point = 3;
    }

    // y 좌표 변환
    if (*y_point == 2) {
        *y_point = 0;
    }
    else if (*y_point == 1) {
        *y_point = 1;
    }
    else if (*y_point == -1) {
        *y_point = 2;
    }
    else if (*y_point == -2) {
        *y_point = 3;
    }
}

// 전달받은 좌표를 x축으로 대칭 변환하는 함수
void change_x_axis(int* x_point, int* y_point) {
    *y_point = 3 - *y_point;
}

// 전달받은 좌표를 y축으로 대칭 변환하는 함수
void change_y_axis(int* x_point, int* y_point) {
    *x_point = 3 - *x_point;
}

// 전달받은 좌표를 원점으로 대칭 변환하는 함수
void change_xy_axis(int* x_point, int* y_point) {
    *x_point = 3 - *x_point;
    *y_point = 3 - *y_point;
}

// 4X4 좌표 평면을 출력하는 함수
void print_matrix(int x_point, int y_point) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // 좌표를 X로, 나머지는 O로
            if ((j == x_point) && (i == y_point)) {
                printf("X");
            }
            else {
                printf("O");
            }
        }
        printf("\n");
    }
}

// 전달받은 좌표를 출력하는 함수
void show_matrix(int x_point, int y_point) {
    printf("change result ==> \n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // 좌표를 X로, 나머지는 O로
            if (i == x_point && j == y_point) {
                printf("X");
            }
            else {
                printf("O");
            }
        }
        printf("\n");
    }
}