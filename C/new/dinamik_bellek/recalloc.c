//============================================================================
// Author      : Muhammed Salih Aydogan
// Date        : 04/09/2020
//============================================================================

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ip, id;

    ip = (int *) malloc(5 * sizeof(int));

    for (id=0; id<5; id++) {
         *(ip+id) = id+1;
         printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
    }

    ip = (int *) realloc(ip, 10 * sizeof(int));

    printf("Genişletilmiş bellek değerleri:\n");

    for (  ; id<10; id++) { /* Burada id değişken değeri 5 olarak başlar. */
         *(ip+id) = id+1;
         printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
    }

    free(ip);
	
	return 0;
}

