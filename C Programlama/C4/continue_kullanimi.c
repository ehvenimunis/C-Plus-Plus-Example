//continue_kullanimi.c
// bu uygulamada contunie kullanýmýný göreceðimiz bir sayaç oluþturuldu.
// program 1 ile 10 arasýndaki rakamlarý yazdýrmaktadýr.


#include<stdio.h>

	int main(void)
	{
		unsigned int x;
		
		for (x=1; x<=10; ++x){
			if(x==5){
				continue; //bu gövdede geri kalan kodu atla. yani 5 deðerini yazdýramayacaktýr.
			}

			printf("%u\n",x); //deðerleri yazdýrýyoruz.
		}
		
	}//main sonu

