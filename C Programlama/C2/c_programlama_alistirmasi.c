// c_programlama_alistirmasi.c
// bu program bir dersin sýnavýndan geçen öðrenci sayýsýný bulmaktadýr.

#include <stdio.h>

int main()
{
	unsigned int passes = 0; 	//baþlangýç deðeri olarak geçenlerre sýfýr deðeri atandý
	unsigned int failures = 0;  //baþlangýç deðeri olarak kalanlara sýfýr deðeri atandý
	unsigned int student = 1;   //baþlangýç deðeri olarak öðrenci sayacýna bir deðeri atandý
	int result = 0; //sonuç deðiþkeni 
	
	//sayaç kontrollü döngü yapýlarak  öðrencinin baþarý durumu elde edilir 
	while (student<=10){
		printf("%s","ogrenci gecti ise 1 kaldi ise 2 degeri girin :" ); //kullanýcýdan baþarý sonucunuý iste 
		scanf("%d",&result); //baþarý sonucunu tut
		//eðer 1 deðeri girildi ise 
		if(result==1)
		{
			passes++; //geçen sayýsýný arttýr 
		}
		//eðer iki deðeri girildi ise 
		else{
			failures++; //kalan sayýsýný arttýr
		}
		student++; //öðrenci sayacýný arttýr 
	}
	
	printf("Passed : %u", passes); //geçen sayýsý 
	printf("Failures : %u", failures); //kalan sayýsý 
	
	//eðer sekiz kiþiden fazla geçen oldu ise mesaj yazdýr
	if(passes>8){
		puts("\n\nbonus to instruction!!!"); //hocaya mesaj yazdýr
	}
	
	return 0;
}//main fonksiyonu sonu 
