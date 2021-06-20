#include<stdio.h>
#define FilePath "/workspace/C_hjm/src/018.FileInputOutput/Files/some_data.txt"

int main(){
	FILE *fp = fopen(FilePath, "r");
	char data[100];
	
	if (fp == NULL){
		printf("파일 열기 오류! \n");
		return 0;
	}
	
	printf("---- 입력 받은 단어들 ---- \n");
	
	while (fscanf(fp, "%s", data) != EOF){
		printf("%s \n", data);
	}
	
	fclose(fp);
	
	return 0;
}