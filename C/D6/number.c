//number.c
//numaraland�rma (enum) kullan�m� ile alakal� bir uygulama

#include <stdio.h>

//numaraland�rma sabitleri ylar� ifadde eder
enum months{ JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC }; //enum sonu

//main ba�lang�c�
int main(void){
	enum months month; //on iki aydan herhangi birini ifadde edebilir

	//i�aret�i dizisi ba�lat�l�yor
	const char *monthName[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	//aylar for d�ng�s�ne sokuluyor
	for (month=JAN; month<=DEC; month++){
		printf("%2d%11s\n\a", month, monthName[month]);
	}//for sonu
	
	return 0;
}//main sonu
