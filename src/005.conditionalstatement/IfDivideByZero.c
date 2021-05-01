#include<stdio.h>
//성공
int main()
{
	double i, j;
	
	printf("2개의 수 중 첫번째 수를 입력하세요 : ");
	scanf("%lf", &i);
	printf("2개의 수 중 두번째 수를 입력하세요 : ");
	scanf("%lf", &j); //l과j 구분 잘해서 기입하기.
	
	if (j == 0)
	{
		printf("0으로 나눌 수 없습니다. \n");
		return 0;	
	}
	
	printf("%f를 %f로 나눈 값은 : %f \n",i,j,i / j);
		return 0;	
	
}