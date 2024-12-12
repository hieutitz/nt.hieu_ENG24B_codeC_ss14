#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Trung Hieu";
    char ch;
    int count = 0;

    printf("Chuoi da khai bao: %s\n", str);
    printf("Nhap vao mot ky tu bat ky: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("So lan xuat hien cua ky tu '%c': %d\n", ch, count);

    return 0;
}

