#include<stdio.h>

int main(){
	double inputNum = 0;
	double sum = 0;
	
	printf("합을 구하고 싶은 마지막 수를 입력하세요 :  ");
	scanf("%lf", &inputNum);
	
	for (int i = 0; i <= inputNum; i++){
		sum += i;
	}
	
	printf("결과 값 : %lf \n", sum);
	
	return 0;
}