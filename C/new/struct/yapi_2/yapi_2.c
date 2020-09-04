
#include <stdio.h>
#include <stdlib.h>

struct yap1 {
  char cdizi[15];
  int id;       
} yd1;

struct yap2 {
  char cdizi[15];
  int id;       
};
//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

struct {
  char cdizi[15];
  int id;       
} yd3;

struct yap2 yd2;

int main(void)
{
  char cdizi[10];

  gets(yd1.cdizi);
  gets(cdizi);
  yd1.id = (int) atoi (cdizi);
  printf("\n");

  gets(yd2.cdizi);
  gets(cdizi);
  yd2.id = (int) atoi (cdizi);
  printf("\n");

  gets(yd3.cdizi);
  gets(cdizi);
  yd3.id = (int) atoi (cdizi);  
  
  printf("%-15s %-d\n", yd1.cdizi, yd1.id);
  printf("%-15s %-d\n", yd2.cdizi, yd2.id);
  printf("%-15s %-d\n", yd3.cdizi, yd3.id);
  
  return 0;
}

