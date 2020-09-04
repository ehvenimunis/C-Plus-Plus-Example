//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char *cp1 = "İlk karakter dizisi";
  char *cp2, *cp3;
  char cdizi[30];

  cp2 = "İkinci karakter dizisi";

  cp3 = malloc(50);
  strcpy(cp3, "Üçüncü karakter dizisi"); /* malloc() ve free() fonksiyonları kullanılmadığında hata verir. */
  strcpy (cdizi, "Dördüncü karakter dizisi");

  printf("%s\n%s\n%s\n%s\n\n", cp1, cp2, cp3, cdizi);

  free(cp3);
  
  return 0;
}

