#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Trung Hieu";
    int len = strlen(str);

    printf("Chuoi da khai bao: %s\n", str);

    printf("Chuoi dao nguoc: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}

