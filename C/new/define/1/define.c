//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>

#define MAK01 "Bir int değer giriniz: "
#define MAK02 20

int main(void)
{
  int id;

  printf(MAK01);              /* 1 */
  scanf("%d", &id);

  printf("%d", MAK02+id);    /* 2 */
  
  return 0;
}


/*
Makro işlemlerinde, #define satırında tanımlanan 
ve program içinde makro adının yerine kullanılan ifade 
ister karakter ister sayısal değerler içersin, daima bir 
karakter dizisi olarak kabul edilir.
*/