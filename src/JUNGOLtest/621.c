#include<stdio.h>
int main(){
	
	int a;
	int b;
	int *p;
	int *pb;
	
	printf("정수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	
	p = &a;
	pb = &b;
	
	printf("%d + %d = %d \n", *p, *pb, *p + *pb);
	printf("%d - %d = %d \n", *p, *pb, *p - *pb);
	printf("%d * %d = %d \n", *p, *pb, *p * *pb);
	printf("%d / %d = %d \n", *p, *pb, *p / *pb);
	
	return 0;
}