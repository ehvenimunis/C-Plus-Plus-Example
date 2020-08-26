//komplex.c
//tarih : 11/07/2019
//muhammed salih aydo�an
//kullan�c�dan al�nana iki komplex say�y�n�n topalm�n� ekrana yazd�ran program

#include<stdio.h>

typedef struct complex{ //yap� ol�uturuldu
	float real;
	float imaj;
}complex;

complex Add(complex n1, complex n2);//fonksiyon deklare edildi

int main(void){ //main ba�lang�c�
	complex n1, n2, sum;
	
	//kullan�c�dan de�er al�n�yor
	printf("birinci komplex sayiyi giriniz : ");
	scanf("%f%f", &n1.real, &n1.imaj);
	
	printf("birinci komplex sayiyi giriniz : ");
	scanf("%f%f", &n2.real, &n2.imaj);
	
	//toplam bulunarak ekrana yazd�r�l�yor
	sum = Add(n1,n2);
	printf("%.1f %.1fi",sum.real, sum.imaj);
}//main fonksiyonu sonu

complex Add(complex n1, complex n2){
	complex sum;
	
	//reel ve imajiner toplam yap�l�r
	sum.real = n1.real + n2.real;
	sum.imaj = n1.imaj + n2.imaj;
	
	return (sum); //toplam de�eri g�nderiliyor
} //fonksiyon sonu
