//put_kullanými
//bu programda if yerine put fonksiyonunun kullanýmý ile alakalý çalýþma yapýldý.

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
		farklý bir yazým þekli : 
		
		
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

