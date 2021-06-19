#include <stdio.h>
#define FilePath "/workspace/C_hjm/src/018.FileInputOutput/Files/some_data.txt"

int main() {
    FILE *fp = fopen(FilePath, "r");
    char c;

    if (fp == NULL) {
        printf("file open error ! \n");
        return 0;
    }

    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    
    printf("\n");
    
    return 0;
}