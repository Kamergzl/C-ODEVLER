#include <stdio.h>

int faktoriyelHesapla(int sayi) {
    if (sayi == 0) {   // Sayı 0 ise faktöriyel 1'dir.
        return 1;
    }
    else {
        return sayi * faktoriyelHesapla(sayi - 1);  // Sayıyı azaltarak özyinemeli olarak faktöriyel hesaplama yapılır.
    }
}

int main() {
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    int faktoriyel = faktoriyelHesapla(sayi);

    printf("%d! = %d\n", sayi, faktoriyel);

    return 0;
}
