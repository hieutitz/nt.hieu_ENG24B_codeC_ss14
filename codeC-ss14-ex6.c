#include <stdio.h>

int main() {
    char chuoi[] = "Nguyen Trung Hieu";
    int so_chu_cai = 0;

    for (int i = 0; chuoi[i]; i++) {
        if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            so_chu_cai++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", so_chu_cai);

    return 0;
}

