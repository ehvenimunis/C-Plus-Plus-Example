//dizi_dogrusal_arama.c
//kullan�c�n�n girdi�i de�eri bir dizi i�erisinde do�rusal arama metoduyla bulan program

#include <stdio.h>
#define SIZE 100

//fonksiyon tan�mlamas�
size_t dogrusalArama(const int array[], int key, int size);

//main fonksiyonu ile program�n ba�lamas�
int main(void){
	int a[SIZE]; //dizi boyutunu belirleme
	int aramaDegeri; //kullan�c�dan al�nacak de�er i�in de�i�ken tan�mlamas�

	int x;
	//veri �retme
	for (x=0; x<=SIZE; ++x){
		a[x]=2*x;
	}//d�ng� sonu
	
	//kullan�c�dan de�erin al�nmas�
	puts("Tamsayi aramasi icin deger giriniz : ");
	scanf("%d",&aramaDegeri);
	
	//a dizisinde de�erin aranmas�
	int durum = dogrusalArama(a, aramaDegeri, SIZE);
	
	//Sonu�lar�n g�r�nt�lenmesi
	if(durum =! -1){
		printf("Bulunan deger %d",durum);
	}//if sonu
	else{
		puts("Deger bulunamadi");
	}//else sonu
}

//anahtar ile her eleman�n do�ru konum bulunana kadar veya dizi sonuna gelene kadar devam etmesi
//eleman bulundu ise konumu bulunmad� ise -1 de�erinin d�nd�r�lmesi
size_t dogrusalArama(const int array[], int key, int size){
	int sayac; //saya� de�i�keni tan�mland�
	
	//dizi i�inde d�ng� ile dola��lmas�
	for(sayac=0; sayac<=size; ++sayac){
		if(array[sayac]==key){
			return sayac; //konumun d�nd�r�lmesi
		}//if sonu
	}//for d�ng� sonu
	
	return -1; //e�er bulunmad� ise -1 g�nderilir
}

