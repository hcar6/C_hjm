#include <stdio.h>
#include <stdlib.h>

int main() {
    double student;  // 입력 받고자 하는 학생 수
    int i; //루프카운트
	double input; // 개별 학생들의 수학점수를 입력받기 위한 변수
    double *score;   // 학생 들의 수학점수 변수
    double sum = 0;  // 총점

    printf("학생의 수는? : ");
    scanf("%lf", &student);

    score = (double *)malloc(student * sizeof(double));

    for (i = 0; i < student; i++) {
        printf("학생 %d 의 점수 : ", i + 1);
        scanf("%lf", &input);
        score[i] = input;
    }

    for (i = 0; i < student; i++) {
        sum += score[i];
    }

    printf("전체 학생 평균 점수 : %.2lf \n", sum / student);
    free(score);
    return 0;
}