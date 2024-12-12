#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai cua chuoi: %zu\n", len);

    return 0;
}

