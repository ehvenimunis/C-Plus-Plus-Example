//isaretciler_uygulama
//bu programda bir de�i�kene i�aret�i atanarak de�eri ekrana yazd�racakt�r

#include<stdio.h>

int main(void){
	int a = 7; //de�i�ken tan�mlamas�
	int *aPtr; //i�aret�i tan�mlamas�

	aPtr = &a; //aPtr'yi a'n�n adresine ayarla
	
	printf("isaretcinin isaret ettigi adres : %p\n",aPtr);
	printf("isaretcinin isaret ettigi degerin adresi : %p\n",&a);
	
	printf("isaretcinin isaret ettigi deger : %d\n",*aPtr);
	printf("isaret edilen deger : %d\n",a);
	
	printf("isaretcinin isaret ettigi adres : %p\n",*&aPtr);
	printf("isaretcinin isaret ettigi degerin adresi : %p",&*aPtr);
	
	
}//main sonu
