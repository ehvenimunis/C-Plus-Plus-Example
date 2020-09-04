//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char *pdizi[5];
  int id;

  /* Bellek tahsisi */
  for (id=0; id<5; id++) {
       pdizi[id] = (char *) malloc(20 * sizeof(char));
  }

  /* Dizi atama */
  for (id=0; id<5; id++) {
       strcpy(pdizi[id], "Karakter dizisi");
  }
  /* Yazdırma */
  for (id=0; id<5; id++) {
       printf ("%s\n", pdizi[id]);
  }

  /* Bellek boşaltma */
  for (id=0; id<5; id++) {
       free(pdizi[id]);
  }
  
  return 0;
}

/*
Program 5 elemanlı bir işaretçi dizisi oluşturur. Her bir işaretçi 
dizisine 20 byte boyutundaki belleğin başlangıç adresini atar. İşaretçi 
indeksleme yöntemi ile her bir işaretçiye "Karakter dizisi" ifadesini
 kopyalar ve ekrana yazdırır. Program sona ermeden önce, free() 
 fonksiyonunu bir döngü içinde kullanarak tahsis edilen belleği boşaltır.
 */