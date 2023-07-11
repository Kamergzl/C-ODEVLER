#include <iostream>
#include <string.h>

int main() {
    char sentence[100];

    printf("Bir kelime veya cumle girin: ");
    fgets(sentence, sizeof(sentence), stdin);

    // strlen fonksiyonunu kullanarak uzunlugu hesapla
    int length = strlen(sentence);

    printf("Girdiginiz kelime veya cumle %d karakterden olusuyor.\n", length);

    return 0;
}