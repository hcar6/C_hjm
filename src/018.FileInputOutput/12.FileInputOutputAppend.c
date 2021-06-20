#include<stdio.h>
#define FilePath "/workspace/C_hjm/src/018.FileInputOutput/Files/some_data.txt"

int main(){
	FILE *fp = fopen(FilePath, "a");
	char c;
	if (fp == NULL){
		printf("파일 열기를 실패하였습니다! \n");
		return 0;
	}
	
	fputs(" Added", fp);
	fclose(fp);
	
	return 0;
}