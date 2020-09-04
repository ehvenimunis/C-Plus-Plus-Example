//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>

enum renk {mavi, turuncu, mor};

int main(void)
{
  enum renk e1, e2, e3;

  e1 = mavi;
  e2 = turuncu;
  e3 = mor;

  printf("%d %d %d\n", e1, e2, e3);
  printf("%d %d %d", mavi, turuncu, mor);
  
  return 0;
}

/*
Program, renk çeşitlerini içeren 3 elemanlı ve 
renk adında bir numaralandırma bildirimi yapar. 
Bildirimden sonra tanımladığı e1, e2 ve e3 adlı 
numaralandırma değişkenlerine sıra ile numaralandırma 
elemanlarının değerlerini atar. Listede yer alan değerleri 
hem direk olarak hem de değişkenler yoluyla ekrana yazar.
*/