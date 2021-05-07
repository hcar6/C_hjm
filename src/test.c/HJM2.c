#include<stdio.h>

int main(){
	
	int i, j;
	
	for (i = 0; i < 5; i++)
	{
		for(j = 4; j >= i; j--)
		{
			printf("* ");
		
		}
		printf("\n");
	
	}
	
	return 0;
	
}
//첫번째 별 찍는걸 while문으로 하는거
	//두번째 국어 수학이지만 영어 점수까지와 각 학생들의 평균값을 구해서 결과값을 나타내도록 만들기.