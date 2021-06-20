#include<stdio.h>
#define FilePath "/workspace/C_hjm/src/JUNGOLtest/Files/627.txt"

int main(){
	FILE *fp = fopen(FilePath, "r");
	float  a, b;
	
	fscanf(fp, "%f", &a);
	fscanf(fp, "%f", &b);
	
	printf("%.1f \n", (a + b) / 2);
	
	return 0;

}