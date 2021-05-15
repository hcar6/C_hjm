//함수의 위치를 main 함수 뒤로 변경 후 실행
#include <stdio.h>
int main(){
	int i, j;
	
	i = 3;
	j = 5;
	
	printf("SWAP 이전 : i : %d, j : %d \n", i, j);
	swap(&i, &j); //swap 함수 호출
	printf("SWAP 이후 : i : %d, j : %d \n", i, j);
	
	return 0;
}

int swap(int *a, int *b){
	int temp = *a;
	
	*a = *b;
	*b = temp;
	
	return 0;
}