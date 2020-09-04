//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>

enum meyve {Karpuz, Kavun, Kiraz, Erik} e;

int main(void)
{
  printf("Bir sayı giriniz[0-3]: ");
  scanf("%d", &e);

  switch (e) {
    case Karpuz: printf("Karpuz");
       break;
    case Kiraz: printf("Kiraz");
       break;
    case Erik: printf("Erik");
       break;
    case Kavun: printf("Kavun");
  }
  
  return 0;
}

// Program girdiğiniz sabit bir değerin atandığı numaralandırma elemanının adını ekrana yazar.