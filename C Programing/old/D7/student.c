//student.c
//Bu program, bir öðrencinin bilgilerini (ad, yaþ ve iþaretler) depolar ve yapýlarý kullanarak ekranda görüntüler.
#include<stdio.h>

//alýnacak bilgiler için bir yapý tanýmlandý
struct student
{
	char name[50];
	unsigned int age;
	float length;
}s;//student yapýsý sonu

int main(void){
	printf("Bilgileri giriniz :\n");
	
	//kullanýcýdan isim isteniyor
	printf("isim giriniz : \a");
	scanf("%s", s.name);
	
	//kullanýcýdan yaþ isteniyor
	printf("yasini giriniz : \a");
	scanf("%u",&s.age);
	
	//kullanýcýdan boy deðeri isteniyor
	printf("boyunu giriniz : \a");
	scanf("%f",&s.length);
	
	//alýnan bilgiler ekrana yazdýrýlýr
	printf("\nGirilen Bilgiler : \a\n");
	
	printf("Name : %s\n", s.name);
	printf("Age : %u\n", s.age);
	printf("Length : %.2f\n", s.length);

}//main sonu


