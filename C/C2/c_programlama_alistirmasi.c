// c_programlama_alistirmasi.c
// bu program bir dersin s�nav�ndan ge�en ��renci say�s�n� bulmaktad�r.

#include <stdio.h>

int main()
{
	unsigned int passes = 0; 	//ba�lang�� de�eri olarak ge�enlerre s�f�r de�eri atand�
	unsigned int failures = 0;  //ba�lang�� de�eri olarak kalanlara s�f�r de�eri atand�
	unsigned int student = 1;   //ba�lang�� de�eri olarak ��renci sayac�na bir de�eri atand�
	int result = 0; //sonu� de�i�keni 
	
	//saya� kontroll� d�ng� yap�larak  ��rencinin ba�ar� durumu elde edilir 
	while (student<=10){
		printf("%s","ogrenci gecti ise 1 kaldi ise 2 degeri girin :" ); //kullan�c�dan ba�ar� sonucunu� iste 
		scanf("%d",&result); //ba�ar� sonucunu tut
		//e�er 1 de�eri girildi ise 
		if(result==1)
		{
			passes++; //ge�en say�s�n� artt�r 
		}
		//e�er iki de�eri girildi ise 
		else{
			failures++; //kalan say�s�n� artt�r
		}
		student++; //��renci sayac�n� artt�r 
	}
	
	printf("Passed : %u", passes); //ge�en say�s� 
	printf("Failures : %u", failures); //kalan say�s� 
	
	//e�er sekiz ki�iden fazla ge�en oldu ise mesaj yazd�r
	if(passes>8){
		puts("\n\nbonus to instruction!!!"); //hocaya mesaj yazd�r
	}
	
	return 0;
}//main fonksiyonu sonu 
