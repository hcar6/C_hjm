#include<stdio.h>
//성공
int main()
{
	int arr[10] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //시작은 0부터 시작한다. 0>1/1>2/2>3.... 
	
	printf("Array 3 번째 원소 : %d \n", arr[2]); 
	//배열의 n번째 원소는 arr[n-1], 즉 배열의 첫 번째 원소는 arr[0]이다.
	
	return 0;
}