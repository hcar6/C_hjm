#include <stdio.h>
#define FilePath "/workspace/C_hjm/src/018.FileInputOutput/a.txt"

int main() {
    FILE *fp = fopen(FilePath, "r");
    int size = 0;

    while (fgetc(fp) != EOF) {
        size++;
    }

    printf("이 파일의 크기는 : %d bytes \n", size);
    fclose(fp);
    
    return 0;
}
