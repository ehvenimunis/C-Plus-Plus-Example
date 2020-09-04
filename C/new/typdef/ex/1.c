//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

/*
Program typedef kullanarak int ifadesi ile aynı işlemi 
gerçekleştiren tms adlı bir başka bir ifade tanımlar. 
değişken bildiriminde tms ifadesini kullanır.
*/

#include <stdio.h>

typedef int tms;

int main(void)
{
  tms id;

  id = 21;

  printf("%d", id);
  
  return 0;
}

/*
typedef ifadesini kullanarak 
C dilindeki veri türlerini temsil 
eden kelimeleri (int, char, float, vs.) 
farklı şekilde tanımlayabilirsiniz. Bu şekilde 
mevcut bir veri türü için yeni bir isim veya 
yeni bir veri türü oluşturabilirsiniz.
*/