
#include <stdio.h>

int main(void)
{
  int id1, id2, id3, id4;

  id1 = 73;
  id2 = 16;
  
  id3 = (id1 > id2) ? id1-id2 : id1+id2;  /* 1 */

  if (id1 > id2) id4 = id1-id2; /* 2 */
  else id4 = id1+id2;           /* 3 */

  printf("%d %d", id3, id4);
  
  return 0;
}