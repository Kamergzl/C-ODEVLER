#include <stdio.h>

int main() {
   FILE *dosya;
   char metin[100];

   // Dosyayı oluşturup metin yazma işlemini gerçekleştiriyoruz
   dosya = fopen("ornek.txt", "w");
   if (dosya == NULL) {
      printf("Dosya oluşturulamadı.");
      return 1;
   }

   printf("Metni giriniz: ");
   fgets(metin, sizeof(metin), stdin);

   fprintf(dosya, "%s", metin);
   fclose(dosya);

   // Dosyayı açma ve metni okuma işlemini gerçekleştiriyoruz
   dosya = fopen("ornek.txt", "r");
   if (dosya == NULL) {
      printf("Dosya açılamadı.");
      return 1;
   }

   printf("Dosyadaki metin:\n");
   while (fgets(metin, sizeof(metin), dosya)) {
      printf("%s", metin);
   }

   fclose(dosya);
   return 0;
}