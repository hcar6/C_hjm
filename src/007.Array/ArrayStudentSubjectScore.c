#include<stdio.h>
int main(){
	int score[3][2];
	int i, j;
	
	for (i = 0; i < 3; i++) //총 3명의 학생의 데이터를 받는다
	{
		for (j = 0; i < 2; j++)
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
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d 번째 학생의 국어 점수 : %d, 수학 점수 : %d \n", i + 1, score[i][0], score[i][1]);
	}
	
	return 0;
	//첫번째 별 찍는걸 while문으로 하는거
	//두번째 국어 수학이지만 영어 점수까지와 각 학생들의 평균값을 구해서 결과값을 나타내도록 만들기.
}