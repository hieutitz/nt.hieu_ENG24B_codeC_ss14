#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Trung Hieu!";

    printf("Chuoi da khai bao: %s\n", str);

    printf("Tung ky tu cach nhau mot dau cach: ");
    for (int i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]);
    }

    printf("\n");

    return 0;
}

