#include<stdio.h>

int main(){
	
	int i, j, k;
	
	for (i = 0; ((i < 5)*2)-1; i++)
	{
		for(k = 0; (k < 4 - i)*2-1; k++)
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
