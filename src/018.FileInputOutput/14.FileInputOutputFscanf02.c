#include<stdio.h>
#include<string.h>
#define FilePath "/workspace/C_hjm/src/018.FileInputOutput/Files/some_data.txt"

int main(){
	FILE *fp = fopen(FilePath, "r+");
	char data[100];
	
	if (fp == NULL){
		printf("파일 열기 오류! \n");
		return 0;
	}
	
	while (fscanf(fp, "%s", data) != EOF){
		if (strcmp(data, "that") == 0){
			fseek(fp, -(long)strlen("that"), SEEK_CUR);
			fputs("this", fp);
			
			fflush(fp);
		}
	}
	
	fclose(fp);
}