#include<stdio.h>
#define Filepath "/workspace/C_hjm/src/018.FileInputOutput/a.txt"

int main(){
	FILE *fp = fopen(Filepath, "r");
	char buf[20];
	
	if (fp == NULL){
		printf("READ ERROR !! \n");
		return 0;
	}
	
	fgets(buf, 20, fp);
	printf("파일 입력 내용 : %s \n", buf);
	fclose(fp);
	
	return 0;
}