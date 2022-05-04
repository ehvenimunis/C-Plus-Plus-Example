//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>

int main(void)
{
  int *ip;
  int idizi[5] = { 5, 17, 21, 34, 46 };
  int id;

  printf("İşaretçi bellek adresi: %p\n\n", &ip);

  ip = &idizi[0];

  for (id=0; id<5; id++, ip++) { /* 1 */
       printf("İşaretçinin içerdiği adres: %p %p\n", ip, &idizi[id]);
       printf("İşaretçinin gösterdiği değişken değeri: %d %d\n\n", *ip, idizi[id]);
  } 
  
  return 0;
}