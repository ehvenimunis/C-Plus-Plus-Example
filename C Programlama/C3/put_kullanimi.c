//put_kullan�mi
//bu programda if yerine put fonksiyonunun kullan�m� ile alakal� �al��ma yap�ld�.

#include<stdio.h>

int main()
{
	int sayi; // birinci sayi 
	int sayi2; //ikinci sayi
	printf("lutfen bir sayi giriniz : ");
	scanf("%d",&sayi);
	printf("%d",sayi);
	
	puts(sayi>=60 ? "\nsayi buyuk\a" : "\nsayi kucuk\a");
	
	/*
		farkl� bir yaz�m �ekli : 
		
		
			if(sayi>=60)
			{
				printf("sayi buyuk");
			}
			else 
			{
				printf("sayi kucuk");
				
			}
	*/
	return 0;
}

