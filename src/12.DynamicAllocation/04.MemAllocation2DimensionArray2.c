#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, input;
	double sum = 0;
    int subject;
	double students;
    int **arr;
    //arr[subject][students] 배열 생성

    printf("과목 수 : ");
    scanf("%d", &subject);

    printf("학생의 수 : ");
    scanf("%lf", &students);

    arr = (int **)malloc(sizeof(int *) * subject);

    for (i = 0; i < subject; i++) {
        arr[i] = (int *)malloc(sizeof(double) * students);
    }

    for (i = 0; i < subject; i++) {
        printf("과목 %d 점수 --------- \n", i+1);

        for (j = 0; j < students; j++) {
            printf("학생 %d 점수 입력 : ", j+1);
            scanf("%d", &input);
            arr[i][j] = input;
        }
    }

     for (i = 0; i < subject; i++) {
        sum = 0;
        for (j = 0; j < students; j++) {
            sum += arr[i][j];
        }
        printf("과목 %d 평균 점수 : %.2lf \n", i + 1, sum / students);
    }

    for (i = 0; i < subject; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}