#include <stdio.h>
#define FilePath "/workspace/C_hjm/src/018.FileInputOutput/Files/some_data.txt"

int main() {
    FILE *fp = fopen(FilePath, "r");
    char data[10];
    char c;

    if (fp == NULL) {
        printf("file open error ! \n");
        return 0;
    }

    fgets(data, 5, fp);
    printf("입력 받은 데이터 : %s \n", data);

    c = fgetc(fp);
    printf("그 다음에 입력 받은 문자 : %c \n", c);

    fseek(fp, -1, SEEK_CUR);

    c = fgetc(fp);
    printf("fseek 실행 후 입력 받은 문자 : %c \n", c);

    fclose(fp);
    
    return 0;
}