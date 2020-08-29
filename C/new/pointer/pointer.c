
#include <stdio.h>

int main(void)
{
  int *ip1, *ip2, id1, id2;     /* 1 */

  ip1 = &id1;                   /* 2 */
  ip2 = &id2;                   /* 3 */
  id1 = 42;                     /* 4 */
  *ip2 = 67;  /* Dolaylı değer atama yöntemi */ /* 5 */
  
  printf("id1 değişkeninin değeri: %d\n", *ip1);
  printf("id2 değişkeninin değeri: %d\n", *ip2);
  printf("id1 değişkeninin bellek adresi: %p\n", ip1);
  printf("id2 değişkeninin bellek adresi: %p\n", ip2);
  
  return 0;
}

