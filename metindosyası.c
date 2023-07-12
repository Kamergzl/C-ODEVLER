#include <stdio.h>

int main() {
   FILE *dosya;
   char metin[100];

   dosya = fopen("deneme.txt", "w");
   if (dosya == NULL) {
      printf("Dosya oluşturulamadı.");
      return 1;
   }

   printf("Metni giriniz: ");
   fgets(metin, sizeof(metin), stdin);

   fprintf(dosya, "%s", metin);
   fclose(dosya);

   dosya = fopen("deneme.txt", "r");
   if (dosya == NULL) {
      printf("Dosya açılamadı.");
      return 1;
   }

   printf("life is good:\n");
   while (fgets(metin, sizeof(metin), dosya)) {
      printf("%s", metin);
   }

   fclose(dosya);
   return 0;
}