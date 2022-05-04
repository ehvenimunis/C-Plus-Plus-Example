//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================ 


#include <stdio.h>

int main(void)
{
  int id;

  printf("Bir int değer giriniz: ");
  scanf("%d", &id);

  #error Programda hata var! /* 1 */
  printf("%d", id);
  
  return 0;
}

// #error direktifi derleyicinin çalışmasını durdurur ve hata ile ilgili bilgileri içeren hata mesajını verir. 