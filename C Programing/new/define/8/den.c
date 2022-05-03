//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================ 

#include <stdio.h>

#define MAK01 21

int main(void)
{
  #undef MAK01  /* 1 */

  #ifdef MAK01
     printf("MAK01 değeri: %d ", MAK01);
  #endif

  #ifndef MAK01
     printf("MAK01 makrosu tanımlanmamıştır!");
  #endif
  
  return 0;
}

/* 
Program, MAK01 makrosunu main() fonksiyonundan önce tanımlar. 
Ancak 1 sayısı ile gösterilen işlem satırında MAK01 makro tanımlaması 
#undef direktifi ile geçersiz hale getirildiğinden, #ifdef direktifi ile 
ilgili işlem satırı derleyici tarafından derlenmez, 
sadece #ifndef direktifi ile ilgili işlem satırı derlenir.
*/