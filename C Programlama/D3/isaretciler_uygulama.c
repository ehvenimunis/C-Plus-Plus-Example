//isaretciler_uygulama.c
//Bir karakter dizinini sabit olmayan verilere sabit olmayan i�aret�i kullanrak b�y�k harflere d�n��t�rme

#include<stdio.h>
#include<ctype.h>

void convertToUppercase (char *s); //prototip

int main(void)
{
	char string[] = "Hello World !!"; //char diziyi ba�latmak
	printf("The string addres before conversion is %p\n",&string);
	printf("The string before conversion is %s\n",string);
	convertToUppercase(string);
	printf("The string after conversion is %s\n",string);
	
}//main sonu

//karakter dizinini b�y�k harfe d�n��t�r�r
void convertToUppercase(char *s)
{
	while(*s != '\0'){ //e�er ge�erli karakter '\0' de�il ise
		*s = toupper(*s); //b�y�k harfe d�n��t�r
		++s; //bir sonraki karaktere ta��
	}//while sonu
}//convertToUppercase fonksiyonu sonu

