#include<stdio.h>

int main(){
	int i;
	int j;
	while(i <= 4) {
		while(j <= i){
			printf("*");
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
	
	
	
	return 0;
}