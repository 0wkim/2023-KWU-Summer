#include <stdio.h>

// ����ڷκ��� x, y ��ǥ���� �Է� �޴� �Լ�
void get_coordination(int* x_point, int* y_point);

// ���޹��� ��ǥ�� x������ ��Ī ��ȯ�ϴ� �Լ�
void change_x_axis(int* x_point, int* y_point);

// ���޹��� ��ǥ�� y������ ��Ī ��ȯ�ϴ� �Լ�
void change_y_axis(int* x_point, int* y_point);

// ���޹��� ��ǥ�� �������� ��Ī ��ȯ�ϴ� �Լ�
void change_xy_axis(int* x_point, int* y_point);

// 4X4 ��ǥ ����� ����ϴ� �Լ�
void print_matrix(int x_point, int y_point);

// ���޹��� ��ǥ�� ���� (2) ~ (5)�� �����ϴ� �Լ�
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

// ����ڷκ��� x, y ��ǥ���� �Է� �޴� �Լ�
void get_coordination(int* x_point, int* y_point) {
    // �Է� �ޱ�
    printf("put X coordination : ");
    scanf_s("%d", x_point);

    printf("put Y coordination : ");
    scanf_s("%d", y_point);

    // x ��ǥ ��ȯ
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

    // y ��ǥ ��ȯ
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

// ���޹��� ��ǥ�� x������ ��Ī ��ȯ�ϴ� �Լ�
void change_x_axis(int* x_point, int* y_point) {
    *y_point = 3 - *y_point;
}

// ���޹��� ��ǥ�� y������ ��Ī ��ȯ�ϴ� �Լ�
void change_y_axis(int* x_point, int* y_point) {
    *x_point = 3 - *x_point;
}

// ���޹��� ��ǥ�� �������� ��Ī ��ȯ�ϴ� �Լ�
void change_xy_axis(int* x_point, int* y_point) {
    *x_point = 3 - *x_point;
    *y_point = 3 - *y_point;
}

// 4X4 ��ǥ ����� ����ϴ� �Լ�
void print_matrix(int x_point, int y_point) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // ��ǥ�� X��, �������� O��
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

// ���޹��� ��ǥ�� ����ϴ� �Լ�
void show_matrix(int x_point, int y_point) {
    printf("change result ==> \n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // ��ǥ�� X��, �������� O��
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