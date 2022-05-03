//time.c
//tarih : 11/07/2019
//muhammed salih aydo�an
//kullan�c� tan�ml� - differenceBetweenTimePeriod i�levini kullanarak iki zaman aral��� aras�ndaki fark� hesaplan�r
#include<stdio.h>

struct TIME
{
	int saat;
	int dakika;
	int saniye;
};

void timeDiff(struct TIME t1, struct TIME t2, struct TIME *diff);

int main(void){
	
	struct TIME startTime, stopTime, diff;
	
	//kullan�c�dan veriler al�n�r
	printf("ilk zamani giriniz\n ");
	printf("sirasiyla saat, dakika, saniye :\n ");
	scanf ("%d %d %d",&startTime.saat, &startTime.dakika, &startTime.saniye);
	printf("ikinci zamani giriniz\n ");
	printf("sirasiyla saat, dakika, saniye :\n ");
	scanf ("%d %d %d",&stopTime.saat, &stopTime.dakika, &stopTime.saniye);
	
	//al�nan veriler i�lenerek sonu� al�n�r
	timeDiff(startTime, stopTime, &diff);
	printf("sonuc : %d : %d : %d",diff.saat, diff.dakika, diff.saniye);
}//main sonu

void timeDiff(struct TIME t1, struct TIME t2, struct TIME *diff){

	if(t2.saniye > t1.saniye){
        --t1.dakika;
        t1.saniye += 60;
    }
    diff->saniye = t1.saniye - t2.saniye;
    
    if(t2.dakika > t1.dakika){
        --t1.saat;
        t1.dakika += 60;
    }
    
	diff->saat = t1.saat - t2.saat;
	diff->dakika = t1.dakika - t2.dakika;
}
