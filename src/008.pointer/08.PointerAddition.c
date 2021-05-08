#include<stdio.h>
int main(){
	int a;
	int *pa;
	pa  = &a;
	
	printf("pa 의 값       : %p \n", pa);
	printf("(pa + 1) 의 값 : %p \n", pa + 1); //4증가(즉, int가 4바이트라서 4증가)
	
	return 0;
}