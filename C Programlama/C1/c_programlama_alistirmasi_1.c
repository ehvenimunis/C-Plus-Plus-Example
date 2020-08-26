//c_programlama_alistirmasi_1.c
//birle�ik faiz hesaplalams� yapan c program�

#include <stdio.h>
#include <math.h>

int main(void)
{
	double faiz_orani = .05;
	double ilk_yatirim = 1000.00;
	int yil_degeri;
	double yatan_miktar;
	
	//yap�lacak tablo i�in sutun ba�l�klar�n� yazma
	printf("%4s%21s\n", "Yil","Yatan Miktar");
	
	for(yil_degeri=1; yil_degeri<=10; ++yil_degeri){
		yatan_miktar = ilk_yatirim * pow(1.0 + faiz_orani,yil_degeri);
		
		//tablonun bir sat�r�n� yazd�rma
		printf("%4u%21f\n",yil_degeri,yatan_miktar);
	}//for sonu
	
}
