//komplex.c
//tarih : 11/07/2019
//muhammed salih aydoðan
//kullanýcýdan alýnana iki komplex sayýyýnýn topalmýný ekrana yazdýran program

#include<stdio.h>

typedef struct complex{ //yapý olþuturuldu
	float real;
	float imaj;
}complex;

complex Add(complex n1, complex n2);//fonksiyon deklare edildi

int main(void){ //main baþlangýcý
	complex n1, n2, sum;
	
	//kullanýcýdan deðer alýnýyor
	printf("birinci komplex sayiyi giriniz : ");
	scanf("%f%f", &n1.real, &n1.imaj);
	
	printf("birinci komplex sayiyi giriniz : ");
	scanf("%f%f", &n2.real, &n2.imaj);
	
	//toplam bulunarak ekrana yazdýrýlýyor
	sum = Add(n1,n2);
	printf("%.1f %.1fi",sum.real, sum.imaj);
}//main fonksiyonu sonu

complex Add(complex n1, complex n2){
	complex sum;
	
	//reel ve imajiner toplam yapýlýr
	sum.real = n1.real + n2.real;
	sum.imaj = n1.imaj + n2.imaj;
	
	return (sum); //toplam deðeri gönderiliyor
} //fonksiyon sonu
