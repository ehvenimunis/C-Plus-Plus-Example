//isaretciler_uygulama.c
//Bir karakter dizinini sabit olmayan verilere sabit olmayan iþaretçi kullanrak büyük harflere dönüþtürme

#include<stdio.h>
#include<ctype.h>

void convertToUppercase (char *s); //prototip

int main(void)
{
	char string[] = "Hello World !!"; //char diziyi baþlatmak
	printf("The string addres before conversion is %p\n",&string);
	printf("The string before conversion is %s\n",string);
	convertToUppercase(string);
	printf("The string after conversion is %s\n",string);
	
}//main sonu

//karakter dizinini büyük harfe dönüþtürür
void convertToUppercase(char *s)
{
	while(*s != '\0'){ //eðer geçerli karakter '\0' deðil ise
		*s = toupper(*s); //büyük harfe dönüþtür
		++s; //bir sonraki karaktere taþý
	}//while sonu
}//convertToUppercase fonksiyonu sonu

