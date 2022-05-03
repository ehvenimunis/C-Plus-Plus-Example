//yildiz_bastirma.c
//bu programda ekranda yýldýzlar ile yýldýz þekli bastýrýlýr.

#include<stdio.h>

	int main(void)
	{
		unsigned int x;
		unsigned int y;

		for (x=0; x<=20; ++x){
			for (y=0;y<=x;++y){
				printf("*  "); //yýldýz yazdýrýyoruz
			}
			printf("\n");
		}

	}//main sonu
