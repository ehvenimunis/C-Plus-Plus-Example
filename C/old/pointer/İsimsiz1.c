//isaretciler_uygulama
//bu programda bir değişkene işaretçi atanarak değeri ekrana yazdıracaktır

#include<stdio.h>

int main(void){
	int a = 7; //değişken tanımlaması
	int *aPtr; //işaretçi tanımlaması

	aPtr = &a; //aPtr'yi a'nın adresine ayarla
	
	printf("isaretcinin isaret ettigi adres : %p\n",aPtr);
	printf("isaretcinin isaret ettigi degerin adresi : %p\n",&a);
	
	printf("isaretcinin isaret ettigi deger : %d\n",*aPtr);
	printf("isaret edilen deger : %d\n",a);
	
	printf("isaretcinin isaret ettigi adres : %p\n",*&aPtr);
	printf("isaretcinin isaret ettigi degerin adresi : %p",&*aPtr);
	
	
}//main sonu
