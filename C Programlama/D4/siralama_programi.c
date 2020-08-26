/* fonksiyon iþaretçileri kullanarak çok amaçlý sýralama programi */
#include <stdio.h>
#define SIZE 10

//prototipler
void bubble(int *, const int, int (*)(int, int));
int ascending(const int, const int);
int descending(const int, const int);

main()
{
   //sýralanmamýþ a dizini yükle
   int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
   int counter, order;

   printf("Enter 1 to sort in ascending order,\n");
   printf("Enter 2 to sort in descending order: ");
   scanf("%d", &order); //artan sýralama için 1 veya azalan sýralama için 2

   printf("\nData items in original order\n");
   
   //orjinal diziyi göster
   for (counter = 0; counter <= SIZE - 1; counter++)
      printf("%4d", a[counter]);
      
   //diziyi artan þekilde sýrala
   if (order == 1) {
      bubble(a, SIZE, ascending);
      printf("\nData items in ascending order\n");
   }//if blogu sonu
   else { //descending fonksiyonunu aktar
      bubble(a, SIZE, descending);
      printf("\nData items in descending order\n");
   }//else blogu sonu

   //sýralý diziyi göster
   for (counter = 0; counter <= SIZE - 1; counter++)
      printf("%4d", a[counter]);

   printf("\n");

   return 0;
}//main sonu

//çok amaçlý kabarcýk sýralama : compare parametresi sýralama þeklini belirleyen
//karþýlaþtýrma fonksiyonuna iþaret eden bir iþaretçidir
void bubble(int *work, const int size, int (*compare)(int, int))
{
   int pass, count;
   void swap(int *, int *);

   for (pass = 1; pass <= size - 1; pass++)

      for (count = 0; count <= size - 2; count++)

         if ((*compare)(work[count], work[count + 1]))
            swap(&work[count], &work[count + 1]);
}

//aldýðý iþaretçileri iþaret ettikleri bellek bölgelerindeki deðerleri deðiþtir.
void swap(int *element1Ptr, int *element2Ptr)
{
   int temp;

   temp = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = temp;
}

//elemanlarýn artan sýralama þekline göre sýraya uygun olup olmadýklarýný kontrol eder
int ascending(const int a, const int b)
{
   return b < a;
}

//elemanlarýn azalan sýralama þekline göre sýraya uygun olup olmadýklarýný kontrol eder
int descending(const int a, const int b)
{
   return b > a;
}
