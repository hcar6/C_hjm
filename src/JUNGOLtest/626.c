//두 개의 정수를 입력받아 작은 수부터 큰 수까지 모든 정수의 합을 구하여 출력하는 프로그램을 작성하시오.
//* 표준입출력방식으로 작성하세요.

//입력 예 5 10
//출력 예 45

#include<stdio.h>
#define FilePath "/workspace/C_hjm/src/JUNGOLtest/Files/626.txt"

int main(){
	FILE *fp = fopen(FilePath, "r+");
	int a, b;
	int sum = 0;
	
	fscanf(fp, "%d", &a);
	fscanf(fp, "%d", &b);
	
	for(int i = a; i <= b; i++)	{
		sum += i;
	} 
	
	printf("%d \n", sum);
	
	fprintf(fp, " %d", sum);
	fclose(fp);
	
	return 0;
}