#include <stdio.h>

void input_score(int input[][5]); // input[5][5]
void cal_score(int cal[][5]);  // 함수 안에서 쓰는 변수 이름
void print_score(char* name[5], char* subject[5], int score[][5]);

int main()
{
    // 0으로 선언해야 총점을 0부터 더해서 구할 수 있음 (곱할거면 1로 선언)
    int score[5][5] = { 0 };

    char* name[5] = { "영희", "철수", "영철", "영수", "총점" };
    char* subject[5] = { "국어", "영어", "수학", "과학", "총점" };

    // 함수

    // 입력
    input_score(score);
    // 연산
    cal_score(score);
    // 출력
    print_score(name, subject, score);

    return 0;
}


// 입력 함수
void input_score(int input[][5]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf_s("%d", &input[i][j]); // vs에선 scanf_s
        }
    }
}

// 연산 함수
void cal_score(int cal[][5]) {
    // 학생별 총점
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cal[i][4] += cal[i][j]; // cal[][0] + cal[][1] + cal[][2] + cal[][3]
        }
    }

    // 과목별 총점
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cal[4][i] += cal[j][i]; // cal[0][] + cal[1][] + cal[2][] + cal[3][]
        }
    }
}

// 출력 함수
void print_score(char* name[5], char* subject[5], int score[][5]) {
    for (int i = 0; i < 5; i++) {
        printf("\t%s", subject[i]); // \t는 tab
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