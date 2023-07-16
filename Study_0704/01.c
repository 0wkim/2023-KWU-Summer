#include <stdio.h>

void input_score(int input[][5]); // input[5][5]
void cal_score(int cal[][5]);  // �Լ� �ȿ��� ���� ���� �̸�
void print_score(char* name[5], char* subject[5], int score[][5]);

int main()
{
    // 0���� �����ؾ� ������ 0���� ���ؼ� ���� �� ���� (���ҰŸ� 1�� ����)
    int score[5][5] = { 0 };

    char* name[5] = { "����", "ö��", "��ö", "����", "����" };
    char* subject[5] = { "����", "����", "����", "����", "����" };

    // �Լ�

    // �Է�
    input_score(score);
    // ����
    cal_score(score);
    // ���
    print_score(name, subject, score);

    return 0;
}


// �Է� �Լ�
void input_score(int input[][5]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf_s("%d", &input[i][j]); // vs���� scanf_s
        }
    }
}

// ���� �Լ�
void cal_score(int cal[][5]) {
    // �л��� ����
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cal[i][4] += cal[i][j]; // cal[][0] + cal[][1] + cal[][2] + cal[][3]
        }
    }

    // ���� ����
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cal[4][i] += cal[j][i]; // cal[0][] + cal[1][] + cal[2][] + cal[3][]
        }
    }
}

// ��� �Լ�
void print_score(char* name[5], char* subject[5], int score[][5]) {
    for (int i = 0; i < 5; i++) {
        printf("\t%s", subject[i]); // \t�� tab
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%s", name[i]);

        for (int j = 0; j < 5; j++) {
            printf("\t%d", score[i][j]);
        }
        printf("\n");
    }
}