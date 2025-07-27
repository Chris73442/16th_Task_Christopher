#include <stdio.h>

int main() {
    int a, b, c;

    printf("Masukkan panjang sisi pertama: ");
    scanf("%d", &a);
    printf("Masukkan panjang sisi kedua: ");
    scanf("%d", &b);
    printf("Masukkan panjang sisi ketiga: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Segitiga Sama Sisi\n");
        } else if (a == b || b == c || a == c) {
            printf("Segitiga Sama Kaki\n");
        } else {
            printf("Segitiga Sembarang\n");
        }
    } else {
        printf("Bukan segitiga (melanggar aturan segitiga)\n");
    }

    return 0;
}
