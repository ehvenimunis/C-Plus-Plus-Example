//time_in_a_mine.c
//kullanýcýdan doðum tarihini ve güncel tarihi alarak farký gönderir.

#include <stdio.h>
struct Date
{
    unsigned int year;
    unsigned int month;
} d1, d2, fark;

int negative(int a);

int main()
{
    printf("Enter information for 1st date\n");
    printf("Enter year: ");
    scanf("%d", &d1.year);
    printf("Enter month: ");
    scanf("%d", &d1.month);
    printf("Enter information for 2st date\n");
    printf("Enter year: ");
    scanf("%d", &d2.year);
    printf("Enter month: ");
    scanf("%d", &d2.month);
    fark.year = d1.year-d2.year;
    fark.month = d1.month-d2.month;
    
    unsigned int a = fark.mounth;
    negative(a);
    
    printf("\nSum of distances = %d %d",fark.year, fark.month);
    return 0;
}

int negative(unsigned int a){

	if(a<0){
    	fark.month = a * -1;
	}
}
