#include<stdio.h>

int printf_hello(){
	printf("Hello!! \n");
	
	return 0;	
}

int main(){
	printf("함수를 불러보자 : ");
	printf_hello();
	
	printf("또 부를까? ");
	printf_hello();
	
	return 0;
	
	
	
}