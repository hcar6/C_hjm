#include<stdio.h>
//성공
//구구단이랑 별 찍는거를 while문을 써서 풀어볼것.
int main()
{
	
	int i = 1, sum = 0;
	
	do
	{
		sum += i;
		i++;
	} while (i < 1);
	
	printf("sum : %d \n", sum);
	
	return 0;

}