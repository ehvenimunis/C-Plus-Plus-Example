//dizi_dogrusal_arama.c
//kullanýcýnýn girdiði deðeri bir dizi içerisinde doðrusal arama metoduyla bulan program

#include <stdio.h>
#define SIZE 100

//fonksiyon tanýmlamasý
size_t dogrusalArama(const int array[], int key, int size);

//main fonksiyonu ile programýn baþlamasý
int main(void){
	int a[SIZE]; //dizi boyutunu belirleme
	int aramaDegeri; //kullanýcýdan alýnacak deðer için deðiþken tanýmlamasý

	int x;
	//veri üretme
	for (x=0; x<=SIZE; ++x){
		a[x]=2*x;
	}//döngü sonu
	
	//kullanýcýdan deðerin alýnmasý
	puts("Tamsayi aramasi icin deger giriniz : ");
	scanf("%d",&aramaDegeri);
	
	//a dizisinde deðerin aranmasý
	int durum = dogrusalArama(a, aramaDegeri, SIZE);
	
	//Sonuçlarýn görüntülenmesi
	if(durum =! -1){
		printf("Bulunan deger %d",durum);
	}//if sonu
	else{
		puts("Deger bulunamadi");
	}//else sonu
}

//anahtar ile her elemanýn doðru konum bulunana kadar veya dizi sonuna gelene kadar devam etmesi
//eleman bulundu ise konumu bulunmadý ise -1 deðerinin döndürülmesi
size_t dogrusalArama(const int array[], int key, int size){
	int sayac; //sayaç deðiþkeni tanýmlandý
	
	//dizi içinde döngü ile dolaþýlmasý
	for(sayac=0; sayac<=size; ++sayac){
		if(array[sayac]==key){
			return sayac; //konumun döndürülmesi
		}//if sonu
	}//for döngü sonu
	
	return -1; //eðer bulunmadý ise -1 gönderilir
}

