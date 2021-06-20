#include<stdio.h>
#define FilePath "/workspace/C_hjm/src/018.FileInputOutput/Files/some_data3.txt"

int main(){
	FILE *fp = fopen(FilePath, "r+");
	char c;
	
	if (fp == NULL){
		printf("파일 열기를 실패하였습니다! \n");
		return 0;
	}
	
	while ((c = fgetc(fp)) != EOF){
		if (c >= 65 && c <= 90){
			fseek(fp, -1, SEEK_CUR);
			fputc(c + 32, fp);
			fseek(fp, 0, SEEK_CUR);
		}else if (97 <= c && c <= 122){
			fseek(fp, -1, SEEK_CUR);
			fputc(c - 32, fp);
			fseek(fp, 0, SEEK_CUR);
		}
	}
	
	fclose(fp);
	
	return 0;
}