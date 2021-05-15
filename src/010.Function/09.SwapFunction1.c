#include<stdio.h>// 아무리 값을 바꿀려고 해도 안바뀜. 애초에 다른 변수라서.
//서로 다른 할당값을 가지고 있어서 변수가 반영이 안됨.
int swap(int a, int b){
	int temp = a;
	
	a = b;
	b = temp;
	
	return 0;
}

int main(){
	int i, j;
	
	i = 3;
	j = 5;
	
	printf("SWAP 이전 : i : %d, j : %d \n", i, j);
	swap(i, j); //swap 함수 호출
	printf("SWAP 이후 : i : %d, j : %d \n", i, j);
	
	return 0;
}