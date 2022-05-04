//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>

void fonk1(char cd1);
char fonk2(char cd1);

int main(void)
{
  char cd1 = 87;  /* 'W' 0101 0111 */
  char cd2;

  printf("Karakter değeri: %c %3d  ", cd1, cd1);  
  fonk1(cd1);
  cd2 = fonk2(cd1);
  printf("Karakter değeri: %c %3d  ", cd2, cd2); /* 'u' 0111 0101 */
  fonk1(cd2);  
  
  return 0;
}

void fonk1(char cd1)
{
  int id;

  for (id=128; id>0; id/=2) {
       if (cd1&id) printf("1 ");
       else printf("0 ");
  }
  printf("\n");
}

char fonk2(char cd1)
{
  struct yap1 {
    char cd1:4;
    char cd2:4;
  };

  union bir1 {
    char cd1;
    struct yap1 yd1;
  } bd1;
  
  char cd2;
  
  bd1.cd1 = cd1;              /* 1 */

  cd2 = bd1.yd1.cd1;          /* 2 */
  bd1.yd1.cd1 = bd1.yd1.cd2;  /* 3 */
  bd1.yd1.cd2 = cd2;          /* 4 */

  return bd1.cd1;
}


/*
Yukarıdaki örnekte, program char bir değişkene atadığı 'W' değerini karakter, 
onluk sayı sistemi ve ikili sayı sisteminde sayı olarak ekrana yazar. Sonra, 
fonk2() fonksiyonu yoluyla değişkenin ilk 4 bit'ini son 4 bit'i ile değiştirerek 
elde edilen 'u' değerini aynı şekilde tekrar ekrana yazar.

fonk2() fonksiyonu içinde her işlem satırında yapılan değişken değerleri aktarım 
işlemleri aşağıdaki şekilde gösterilmektedir. fonk2() fonksiyonu içindeki cd2 
değişkeni geçici veri depolama değişkeni olarak kullanılmaktadır.
*/