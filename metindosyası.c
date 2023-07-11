#include <stdio.h>

int main() {
   FILE *dosya;
   char metin[100];

   dosya = fopen("deneme.txt", "w");
   
   printf("metni giriniz: ");
   fgets(metin, sizeof(metin), stdin);

   fprintf(dosya, "%s", metin);
   fclose(dosya);

   dosya = fopen("deneme.txt", "r");
 
   printf("life is good:\n");
   while (fgets(metin, sizeof(metin), dosya)) {
      printf("%s", metin);
   }

   fclose(dosya);
   return 0;
}