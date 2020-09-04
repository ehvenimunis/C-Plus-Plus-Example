//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>
#include <conio.h>

struct yap {
  unsigned uid1: 1;
  unsigned uid2: 1;
  unsigned uid3: 1;
  unsigned uid4: 1;
  unsigned uid5: 1;
  unsigned uid6: 1;
  unsigned uid7: 1;
  unsigned uid8: 1;
};

union bir {
  char cd;
  struct yap yd;
} bd;

void fonk(char cd);

int main(void)
{
  bd.cd = 65; /* 'A' 0100 0001 */
  printf("Karakter değeri: %c %d  ", bd.cd, bd.cd);

  if (bd.yd.uid8) printf("1 ");
  else printf("0 ");
  if (bd.yd.uid7) printf("1 ");
  else printf("0 ");
  if (bd.yd.uid6) printf("1 ");
  else printf("0 ");
  if (bd.yd.uid5) printf("1 ");
  else printf("0 ");
  if (bd.yd.uid4) printf("1 ");
  else printf("0 ");
  if (bd.yd.uid3) printf("1 ");
  else printf("0 ");
  if (bd.yd.uid2) printf("1 ");
  else printf("0 ");
  if (bd.yd.uid1) printf("1 ");
  else printf("0 ");
  
  printf("\nKarakter değeri: %c %d  ", bd.cd, bd.cd);
  fonk(bd.cd);
}

void fonk(char cd)
{
  int id;

  for (id=128; id>0; id/=2) {
       if (cd&id) printf("1 ");
       else printf("0 ");
  }
  printf("\n");
}

