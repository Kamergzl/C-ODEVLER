#include<stdio.h>

int main() {
    float sayi;
    
    printf("Bir ondalik sayi girin: ");
    scanf("%f", &sayi);
    
    printf("Girilen sayi onaltilik olarak: %X\n", *&sayi);
    
    return 0;
}