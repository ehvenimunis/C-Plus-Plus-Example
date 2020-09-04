//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================ 


// Koşula Bağlı Derleme

#include <stdio.h>

#define MAK01 20
#define MAK02 50

int main(void)
{
  #if MAK01<MAK02
     printf("MAK01 değeri MAK02 değerinden küçüktür.\n");
     printf("MAK01 değeri: %d\nMAK02 değeri: %d\n", MAK01, MAK02);
  #endif

  #if MAK01>MAK02
     printf("MAK01 değeri MAK02 değerinden büyüktür.\n");
     printf("MAK01 değeri: %d\nMAK02 değeri: %d\n", MAK01, MAK02);
  #endif
  
  return 0;
}

// Program , MAK01 değeri MAK02 değerinden küçük olduğundan, sadece ilk #if direktifi içinde yer alan satırları derler. 
// İkinci #if direktifi içinde yer alan işlem satırları hiç derlenmez.