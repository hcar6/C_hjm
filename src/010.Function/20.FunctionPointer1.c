#include<stdio.h>
int max(int a, int b);
int main(){
	int a, b;
	int (*pmax)(int, int);//함수포인터
	pmax = max;
	
	printf("두 정수를 입력하세요. \n");
	scanf("%d %d", &a, &b);
	printf("max(a,b) : %d \n", max(a, b));
	printf("pmax(a,b) : %d", pmax(a ,b));
	
	return 0;
	
}

int max(int a, int b){
	if (a >b) {
		return a;
	}
	else{
		return b;
	}
	
	return 0;
}