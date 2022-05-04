//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================ 


#include <stdio.h>

int main(void)
{
  int id;

  for (id=0; id<10; id++) printf("%d ", id+1);

  printf("\nDerlenen dosya: %s\n", __FILE__);
  printf("Derlenen satır: %d\n", __LINE__);
  printf("Derleme tarihi: %s\n", __DATE__);
  printf("Derleme zamanı: %s", __TIME__);
  
  return  0;
}

