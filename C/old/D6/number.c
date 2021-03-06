//number.c
//numaralandırma (enum) kullanımı ile alakalı bir uygulama

#include <stdio.h>

//numaralandırma sabitleri yları ifadde eder
enum months{ JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC }; //enum sonu

//main başlangıcı
int main(void){
	enum months month; //on iki aydan herhangi birini ifadde edebilir

	//işaretçi dizisi başlatılıyor
	const char *monthName[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	//aylar for döngüsüne sokuluyor
	for (month=JAN; month<=DEC; month++){
		printf("%2d%11s\n\a", month, monthName[month]);
	}//for sonu
	
	return 0;
}//main sonu
