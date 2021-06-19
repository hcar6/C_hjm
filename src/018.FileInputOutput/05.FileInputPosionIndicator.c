#include <stdio.h>
#define FilePath "/workspace/C_hjm/src/018.FileInputOutput/Files/b.txt" 
int main() {
    FILE *fp = fopen(FilePath, "r");
    fgetc(fp); //a
    fgetc(fp); //b
    fgetc(fp); //c
    fgetc(fp); //d
    
    fseek(fp, 0, SEEK_SET);
    printf("다시 파일 처음에서 입력 받는다면 : %c \n", fgetc(fp));
    fclose(fp);
    
    return 0;
}