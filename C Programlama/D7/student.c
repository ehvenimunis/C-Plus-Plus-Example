//student.c
//Bu program, bir ��rencinin bilgilerini (ad, ya� ve i�aretler) depolar ve yap�lar� kullanarak ekranda g�r�nt�ler.
#include<stdio.h>

//al�nacak bilgiler i�in bir yap� tan�mland�
struct student
{
	char name[50];
	unsigned int age;
	float length;
}s;//student yap�s� sonu

int main(void){
	printf("Bilgileri giriniz :\n");
	
	//kullan�c�dan isim isteniyor
	printf("isim giriniz : \a");
	scanf("%s", s.name);
	
	//kullan�c�dan ya� isteniyor
	printf("yasini giriniz : \a");
	scanf("%u",&s.age);
	
	//kullan�c�dan boy de�eri isteniyor
	printf("boyunu giriniz : \a");
	scanf("%f",&s.length);
	
	//al�nan bilgiler ekrana yazd�r�l�r
	printf("\nGirilen Bilgiler : \a\n");
	
	printf("Name : %s\n", s.name);
	printf("Age : %u\n", s.age);
	printf("Length : %.2f\n", s.length);

}//main sonu


