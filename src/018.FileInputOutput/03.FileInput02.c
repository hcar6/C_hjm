#include <stdio.h>
#define FilePath "/workspace/C_hjm/src/018.FileInputOutput/a.txt"

int main() {
    FILE *fp = fopen(FilePath, "r");
    char c;

    printf("한 글자씩 입력 받기 : ");
    while ((c = fgetc(fp)) != EOF) { 
        printf("%c", c);
    }

    fclose(fp);
    
    return 0;
}