//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

/*
Program, bir yapı ve bu yapı ile bağlantılı 2 adet değişken bildirimi 
yapar. Değişkenler yoluyla yapı elemanlarına atadığı değerleri ekrana yazar.


Program, bir yapı ve bu yapı ile bağlantılı bir adet işaretçi değişken 
bildirimi yapar. İşaretçi yoluyla yapı elemanlarına atadığı değerleri 
ekrana yazar. 1 sayısı ile gösterilen işlem satırında ise bir yapı 
boyutu için bellekte yer ayırır ve ayırdığı belleğin başlangıç adresini 
yp işaretçisine atar

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct { // Yapılarla birlikte typedef ifadesi kullanma durumu 
  char cdizi1[20];
  char cdizi2[20];
  int id;
} yap;

int main(void)
{
  yap yd1, yd2;

  strcpy(yd1.cdizi1, "Bilgisayar");
  strcpy(yd1.cdizi2, "Programlama");
  strcpy(yd2.cdizi1, "C");
  strcpy(yd2.cdizi2, "Programlama");
  yd1.id = 21;
  yd2.id = 34;

  printf("%s %s\n%s %s\n", yd1.cdizi1, yd1.cdizi2, yd2.cdizi1, yd2.cdizi2);
  printf("%d %d", yd1.id, yd2.id);


  // ----------------------------------------------

  yap *yp;

  yp = (yap*) malloc (sizeof(yap)); /* 1 */

  strcpy(yp->cdizi1, "Bilgisayar");
  strcpy(yp->cdizi2, "Programlama");
  yp->id = 21;  

  printf("%s %s %d", yp->cdizi1, yp->cdizi2, yp->id);
  
  free(yp);

  // ----------------------------------------------
  
  return 0;
}

