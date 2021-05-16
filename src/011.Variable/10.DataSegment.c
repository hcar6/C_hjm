#include<stdio.h>
int gv = 3;
int main(){
	char arr[20] = "WHATTHEHECK";
	int lv;
	char *str = "Hello, Baby";
	
	printf("Array(arr)     : %p \n", arr);
	printf("L Variable(lv) : %p \n", &lv);
	printf("G variable(gv) : %p \n", &gv);
	printf("ReadOnly(str)  : %p \n", str);
	
	return 0;
}