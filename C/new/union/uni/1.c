//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>
/* 
Bileşimler (Unions) 

Bileşim, iki veya daha fazla değişken tarafından kullanılan tek bir bellek birimidir.
Burada bahsi geçen değişkenler farklı veri türünden olabilir.
Ancak, aynı bellek bölgesini paylaşan değişkenlerden sadece bir tanesi aynı anda bellek bölgesini kullanabilir. 

*/
union bir {
  int id;
  double dd;
  char cd;
} bd;

int main(void)
{
  bd.id = 21;
  bd.cd = 'A';

  printf("%d %c\n", bd.id, bd.cd);  /* 1 */

  bd.id = 127;
  printf("%d %c\n", bd.id, bd.cd);  /* 2 */

  bd.dd = 34.75;
  printf("%d %f", bd.id, bd.dd);    /* 3 */
  
  return 0;
}

/*
 Yukarıdaki örnekte, program 1 sayısı ile gösterilen işlem 
 satırında bir bileşiminde yer alan cd değişkeninin, 2 sayısı
 ile gösterilen işlem satırında id değişkeninin ve 3 sayısı 
 ile gösterilen işlem satırında dd değişkeninin değerini normal 
 olarak ekrana yazar. Aynı işlem satırlarında bahsi geçen 
 değişkenler dışında kalan değerleri istendiği şekilde ekrana yazmaz, 
 çünkü aynı bileşim içinde yer alan değişkenlerden aynı anda sadece 
 bir tanesi ayrılan bellek bölgesini kullanabilir. Bu nedenle, 
 sadece en son olarak atama yapılan bileşim değişkeni ekrana normal
 olarak yazılabilir.
*/