#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Trung Hieu";
    int so_tu = 0;

    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] != ' ' && (i == 0 || chuoi[i-1] == ' ')) {
            so_tu++;
        }
    }

    printf("Chuoi da khai bao: %s\n", chuoi);
    printf("So tu trong chuoi: %d\n", so_tu);

    return 0;
}

