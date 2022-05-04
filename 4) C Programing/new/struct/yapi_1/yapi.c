//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>

struct yap {
  char cdizi1[15];    /* İsim      */ 
  char cdizi2[15];    /* Soyadı    */
  char cdizi3[15];    /* Memleketi */
  char cdizi4[15];    /* Tahsili   */
  int id;             /* Yaşı      */
} yd;

int main(void)
{
  printf("Adı: ");
  gets(yd.cdizi1);
  printf("Soyadı: ");
  gets(yd.cdizi2);
  printf("Memleketi: ");
  gets(yd.cdizi3);
  printf("Tahsili: ");
  gets(yd.cdizi4);
  printf("Yaşı: ");
  scanf("%d", &yd.id);
  printf("%s %s %s %s %d", yd.cdizi1, yd.cdizi2, yd.cdizi3, yd.cdizi4, yd.id);
  
  return 0;
}
