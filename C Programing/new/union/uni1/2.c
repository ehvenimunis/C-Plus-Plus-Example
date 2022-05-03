//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>
#include <string.h>

struct yap {
  int id1;
  int id2;
  int id3;
  double dd;
  char cd1;
  char cd2;
  char cd3;
} yd;

union bir {
  int id1;
  int id2;
  int id3;
  double dd;
  char cd1;
  char cd2;
  char cd3;
} bd;

int main(void)
{
  printf("Yapı boyutu: %d\nBileşim boyutu: %d", sizeof(yd), sizeof(bd));
  
  return 0;
}

/*
    Yukarıdaki örnekte, program aynı veri türlerinden ve aynı sayıda elemana sahip
    birer adet yapı ve bileşim tanımlar. Yapı ve bileşim boyutlarını ekrana yazar. 
    Aynı elemanlara sahip olmalarına rağmen yapıya eklenen elemanların yapı boyutunu 
    artırdığına, bileşim elemanlarının ise sadece en büyük olanının bileşim boyutunu 
    belirlediğine dikkat ediniz.
*/