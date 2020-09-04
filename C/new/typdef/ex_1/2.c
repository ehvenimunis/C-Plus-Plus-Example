//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

/*
Program, size bir int değişkeni tanımlamak için 3 farklı ifade 
kullanma olanağı sağlar. Sonuç olarak, id1, id2 ve id3 
değişkenlerinin hepsi birer int değişkendir.
*/

#include <stdio.h>

typedef int tms;
typedef tms tams;
typedef unsigned short int usi;


int main(void)
{
  int id1;

  tms id2;
  tams id3;

  id2 = 4;
  id3 = 11;

  for (id1=0; id1<5; id1++, id2++, id3++) printf("%d ", id2+id3);



  // Ayrıca uzun ifadelerle bildirimleri yapılan veri türleri için 
  // typedef ifadesini kullanarak kısa kelimeler elde edebilirsiniz
  usi usid;

  usid = 32453;
  printf("%u", usid);
  
  return 0;
}

