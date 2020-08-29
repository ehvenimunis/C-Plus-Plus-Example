
#include <stdio.h>

int main(void)
{
  int *ip;
  int idizi[5] = { 36, 64, 127, 152, 183 };

  ip = &idizi[0];

  printf("%d %d %p\n", idizi[0], *ip, ip);

  *ip++;     /* 1 */ /* ip++ ile aynı işlemi gerçekleştirir! */

  printf("%d %d %p\n", idizi[0], *ip, ip);

  (*ip)++;   /* 2 */ /* idizi[1]++ ile aynı işlemi gerçekleştirir! */

  printf("%d %d %p\n", idizi[0], *ip, ip);
  
  return 0;
}
/*
    *ip++;      İşaretçinin gösterdiği bellek adresini artırır. 
    (*ip)++;    İşaretçinin gösterdiği bellek adresindeki değişken değerini artırır. 
*/