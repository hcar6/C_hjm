#include<stdio.h>
/* 별 거꾸로 찍기(2)
* * * * *
 * * * *
  * * *
   * *
    *
*/

int main(){
	
	int i, j, k;
	
	for (i = 0; i < 5; i++) // 층수 나타내는곳
	{
		for (k = 0; k < i; k++) // 여기는 공백을 만들어냄 
		{
			printf(" ");
		}
		for (j = 4; j >= i; j--) // 여기는 별
		{
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;

}

