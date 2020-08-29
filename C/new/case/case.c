
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
  int id;
  char cd;

  printf("Şu sayılardan birini giriniz: [1] [2] [3]");
  scanf("%d", &id);

  switch (id) {
        case 1 :
          printf("Şu harflerden birini giriniz: [A] [B]\n");
          cd = toupper(getch());
          switch (cd) {
             case 'A':
               printf("1 numaralı seçenek içinde A harfini girdiniz!\n");
               break;
             case 'B':
               printf("1 numaralı seçenek içinde B harfini girdiniz!\n");
               break;
             default :
               printf("Belirtilen harflerden birini girmediniz!\n");
          }
          break;
        case 2 :
          printf("2 numaralı seçeneği seçtiniz!\n");
          break;
        case 3 :
          printf("3 numaralı seçeneği seçtiniz!\n");
          break;
        default :
          printf("Verilen seçeneklerden birini girmediniz!\n");
  }
  
  return 0;
}


