//continue_kullanimi.c
// bu uygulamada contunie kullan�m�n� g�rece�imiz bir saya� olu�turuldu.
// program 1 ile 10 aras�ndaki rakamlar� yazd�rmaktad�r.


#include<stdio.h>

	int main(void)
	{
		unsigned int x;
		
		for (x=1; x<=10; ++x){
			if(x==5){
				continue; //bu g�vdede geri kalan kodu atla. yani 5 de�erini yazd�ramayacakt�r.
			}

			printf("%u\n",x); //de�erleri yazd�r�yoruz.
		}
		
	}//main sonu

