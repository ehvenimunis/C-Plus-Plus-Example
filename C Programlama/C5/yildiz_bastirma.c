//yildiz_bastirma.c
//bu programda ekranda y�ld�zlar ile y�ld�z �ekli bast�r�l�r.

#include<stdio.h>

	int main(void)
	{
		unsigned int x;
		unsigned int y;

		for (x=0; x<=20; ++x){
			for (y=0;y<=x;++y){
				printf("*  "); //y�ld�z yazd�r�yoruz
			}
			printf("\n");
		}

	}//main sonu
