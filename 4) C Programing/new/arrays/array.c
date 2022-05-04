//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <string.h>
#include <stdio.h>

int main(void)
{
  char cdizi1[50], cdizi2[20];

  printf("Bir karakter dizisi giriniz (20 karakterden az): ");
  gets(cdizi1);
  printf("Bir karakter dizisi giriniz (20 karakterden az): ");
  gets(cdizi2);

  printf("\n%s\n%s\n", cdizi1, cdizi2);
  
  printf("Karakter dizilerinin uzunlukları : %d %d\n", strlen(cdizi1), strlen(cdizi2));

  if (!strcmp(cdizi1, cdizi2)) printf("Karakter dizileri birbirine eşittir!");
  else printf("Karakter dizileri birbirine eşit değildir!");
  
  strcat(cdizi1, cdizi2);
  printf("\n%s\n", cdizi1);

  strcpy(cdizi1, cdizi2);
  printf("%s\n", cdizi1);
  
  return 0;
}

