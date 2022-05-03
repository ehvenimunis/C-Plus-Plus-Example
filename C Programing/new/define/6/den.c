//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================ 

#include <stdio.h>

int main(void)
{
  int id1;
  
  #ifndef MAK01
     int id2=0;
  #endif

  for (id1=0; id1<10; id1++) {
       printf("%d ", id1+1);

       #ifndef MAK01
          id2 += 4 * (id1+1);
       #endif
  }

  #ifndef MAK01
     printf("\nToplam: %d", id2);
  #endif
  
  return 0;
}


/* 
Kısaca özetlemek gerekirse, #ifdef direktifi içinde yer alan 
işlem satırlarının derlenmesi için direktif içinde geçen makronun 
mutlaka program içinde tanımlanmış olması, #ifndef direktifi ile 
ilgili işlem satırlarının derlenmesi için ise, direktif içinde geçen 
makronun tanımlanmamış olması gerekir.
*/
