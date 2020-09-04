//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *ip;

  ip = (int*) malloc(sizeof(int)); /* 1 */
  *ip = 126;

  printf("%p\n", ip);
  printf("%d", *ip);
  
  free(ip);
  
  return 0;
}

// Bir program sona erdiği zaman tahsis edilmiş belleğin tamamı otomatik olarak boşa çıkar.