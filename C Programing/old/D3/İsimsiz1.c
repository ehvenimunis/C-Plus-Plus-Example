//isaretciler_uygulama.c
//Bir karakter dizinini sabit olmayan verilere sabit olmayan iþaretçi kullanrak büyük harflere dönüþtürme

#include<stdio.h>
#include<ctype.h>

void convertToUppercase (char *s); //prototip

int main(void)
{
	char string[] = "AllAh BüYüKtÜr !!"; //char diziyi baþlatmak
	printf("The string addres before conversion is %d",*string);
	printf("The string before conversion is %s",string);
}

