#include<stdio.h>
#define FilePath "/workspace/C_hjm/src/JUNGOLtest/Files/628.txt"

int main(){
	FILE *fp = fopen(FilePath, "r");
	float data[5];
    char c;

    fgets(data, 5, fp);
    printf("Name Score\n%4s %5f\n", data, data);

    c = fgetc(fp);
    printf("%4c\n", c);
	
	return 0;
}