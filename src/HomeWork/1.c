#include <stdio.h>

//두번째 국어 수학이지만 영어 점수까지와 각 학생들의 평균값을 구해서 결과값을 나타내도록 만들기. ======> 성공(점수가 50, 60, 60일 경우 소수점 자리도 나오는데 그건 어떻게 바꾸는지 물어보기.)

int main() 
{
    int score[3][3];
    int i, j;

    for (i = 0; i < 3; i++)  //총 3명의 학생의 데이터를 받는다
    {
        for (j = 0; j < 3; j++) 
        {
            if (j == 0) 
            {
                printf("%d 번째 학생의 국어 점수 : ", i + 1);
                scanf("%d", &score[i][j]);
            }
            else if (j == 1) 
            {
                printf("%d 번째 학생의 수학 점수 : ", i + 1);
                scanf("%d", &score[i][j]);
            }
			else
			{
				printf("%d 번째 학생의 영어 점수 : ", i + 1);
				scanf("%d", &score[i][j]);
			}
        }
    }

    for (i = 0; i < 3; i++) 
    {
        printf("%d 번째 학생의 국어 점수 : %d, 수학 점수 : %d, 영어 점수 : %d, 평균 값(2번째 자리까지) : %d \n", i + 1, score[i][0], score[i][1], score[i][2], ((score[i][0]) + (score[i][1]) + (score[i][2])) / 3);
    }

	return 0;
}