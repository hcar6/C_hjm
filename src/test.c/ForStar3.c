#include<stdio.h>

int main(){
	
	int i, j, k;
	
	for (i = 0; i < 5; i++)
	{
		for(k = 0; k < 4 - i; k++)
		{
			printf(" ");
		}
			for(j = 0; (i >= j) & (j < 5); j++)
		{
			printf("* ");
		
		}
		printf("\n");
	
	}
	
	return 0;
	
}