#include<stdio.h>
#define square(x) x * x

int main(int argc, char **argv){
	printf("squar(3) : %d \n", square(3)); // 9
	printf("square(3 + 1) : %d \n", square(3 + 1)); // 7
	
	return 0;
}