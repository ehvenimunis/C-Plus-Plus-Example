//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================ 


#include <stdio.h>

#define MAK01 3

int main(void)
{
  int id;

  #if MAK01 == 1
    for (id=1; id<=10; id++) printf("%d ", id);
  #elif MAK01 == 2
    for (id=2; id<=10; id++) printf("%d ", id);
  #elif MAK01 == 3
    for (id=3; id<=10; id++) printf("%d ", id);
  #endif
  
  return 0;
}


// MAK01 makrosuna 1 ile 3 arasındaki sayılardan hangisini atarsanız, program o sayıdan başlamak suretiyle 10'a kadar olan sayıları ekrana yazar.