#include <stdio.h>
#define FilePath "/workspace/C_hjm/src/018.FileInputOutput/Files/c.txt"

int main() {
    FILE *fp = fopen(FilePath, "w");
    fputs("C programming is so fun", fp);
    fseek(fp, 0, SEEK_SET);
    fputs("is C programming", fp);
    fclose(fp);
    
    return 0;
}