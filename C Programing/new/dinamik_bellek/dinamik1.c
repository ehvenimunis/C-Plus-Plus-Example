//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *cp;

  cp = malloc(40);

  if (!cp) {
      printf("Bellek tahsis hatası!");
      exit(1);
  }

  printf("Bir karakter dizisi giriniz: ");
  gets(cp);
  printf(cp);
  free(cp);
  
  return 0;
}

/* 
Yukarıdaki örnekte, program 40 byte'lık bir bellek tahsisi yapar 
ve bu belleğin başlangıç adresini bir char işaretçiye atar. Böylece
oluşturduğu dinamik karakter dizisine girdiğiniz karakter dizisini
atar. Girdiğiniz karakter dizisini ekrana yazdıktan sonra free() fonksiyonunu
 kullanarak tahsis edilen belleği boşaltır.
 */