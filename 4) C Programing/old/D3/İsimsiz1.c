//isaretciler_uygulama.c
//Bir karakter dizinini sabit olmayan verilere sabit olmayan i�aret�i kullanrak b�y�k harflere d�n��t�rme

#include<stdio.h>
#include<ctype.h>

void convertToUppercase (char *s); //prototip

int main(void)
{
	char string[] = "AllAh B�Y�Kt�r !!"; //char diziyi ba�latmak
	printf("The string addres before conversion is %d",*string);
	printf("The string before conversion is %s",string);
}

