/*liste.c
tarih : 14/07/2019
muhammeed salih aydoðan
bu program bir liste oluþturmak için kullanýcýdan veri talep etmektedir. oluþan liste üzerinde iþlem yapabilir.
referanslar : www.algoritmauzmani.com
		      https://youtu.be/e_-SKd0-SoE
*/

//kütüphane eklenir
#include <stdio.h>
#include <stdlib.h>


//veriler için yapý
struct node{
    int veri; //ilk veri
    struct node *sonraki; //sonraki düðümü gösteren pointer
};

struct node* baslangic = NULL; //düðüm baþlangýç deðerini tutar
struct node* geciciDegisken;

int choise; //global deðiþken (seçilen maddeyi tutar)

//düðüm üreten bir fonksiyon oluþturduk.
struct node* dugumOlustur()
{
    struct node* yeniDugum = (struct node*)malloc(sizeof(struct node)); //dinamik alan oluþturma söz konusudur.
    return yeniDugum;
}

//listede sona eleman eklenmesini saðlar.
void sonaEkle(int x)
{
    struct node* element = dugumOlustur();
    element->veri = x;
    element->sonraki = NULL;

    if(baslangic == NULL)
    {
        baslangic = element;
    }//if sonu
    
    else
    {
        geciciDegisken = baslangic;
        while(geciciDegisken->sonraki != NULL)
        {
            geciciDegisken = geciciDegisken->sonraki;
        }//while sonu
        geciciDegisken->sonraki = element;
    }//else sonu
}//sonaEkle fonksiyonu sonu

//listede baþa eleman eklemesi yapar
void basaEkle(int y)
{
    struct node* element = dugumOlustur();
    element->veri = y;
    geciciDegisken = baslangic;
    element->sonraki = geciciDegisken;
    baslangic = element;
}//basaEkle foksiyonu sonu

//listede araya eleman eklemesi yapar
void arayaEkle(int z, int index)
{
    int counter = 0;
    struct node* arayaEklenecek = dugumOlustur();
    arayaEklenecek->veri = z;
    geciciDegisken = baslangic;
    if(index == 0)
    {
        basaEkle(z);
    }
    else
    {
            while(geciciDegisken != NULL)
            {
                if(counter+1 == index)
                    break;
                geciciDegisken = geciciDegisken->sonraki;
                counter++;
            }
            struct node* geciciDegisken1;
            geciciDegisken1 = geciciDegisken->sonraki;
            geciciDegisken->sonraki = arayaEklenecek;
            arayaEklenecek->sonraki = geciciDegisken1;
    }

}//arayaEkle fonksiyon sonu

//liste sonundan eleman siler
void sondanSil()
{
    if(baslangic == NULL)
    {
        printf("\n Liste Bos");
    }//if sonu
    else
    {
        geciciDegisken = baslangic;
        if(baslangic->sonraki == NULL)
        {
            free(baslangic);
            baslangic = NULL;
        }//if sonu
        else
        {
            while(geciciDegisken->sonraki->sonraki != NULL)
            {
                geciciDegisken = geciciDegisken->sonraki;
            }//while sonu
            struct node* sonrakiDugum = geciciDegisken->sonraki;
            free(sonrakiDugum);
            geciciDegisken->sonraki = NULL;
        }//else sonu
    }//else sonu
}//fonksiyon sonu

//listede baþtan eleman siler
void bastanSil()
{
    if(baslangic != NULL)
    {
        if(baslangic->sonraki != NULL)
        {
            struct node* geciciDegisken2 = baslangic;
            baslangic = baslangic->sonraki;
            free(geciciDegisken2);
        }//if sonu
        else
        {
            free(baslangic);
            baslangic = NULL;
        }//else sonu
    }//if sonu
    else
    {
        printf("\nSilinecek dugum yok...");
    }//else sonu
}//bastanSil fonksiyonu sonu

//listede3 aradan eleman siler
void aradanSil(int t)
{
    if(baslangic->veri == t)
    {
        bastanSil();
    }//if sonu
    else
    {
        geciciDegisken = baslangic;
        while(geciciDegisken->sonraki->veri != t)
        {
            geciciDegisken = geciciDegisken->sonraki;
        }//while sonu
        struct node* geciciDegisken1 = geciciDegisken->sonraki->sonraki;
        struct node* geciciDegisken2 = geciciDegisken;
        free(geciciDegisken->sonraki);
        geciciDegisken2->sonraki = geciciDegisken1;
    }//else sonu
}//aradanSil fonksiyon sonu

//listeyi ters çevirir
void tersCevir()
{
    struct node* oncekiDugum = NULL;
    struct node* sonrakiNode;
    geciciDegisken = baslangic;
    while(geciciDegisken != NULL)
    {
        sonrakiNode = geciciDegisken->sonraki;
        geciciDegisken->sonraki = oncekiDugum;
        oncekiDugum = geciciDegisken;
        geciciDegisken = sonrakiNode;
    }
    baslangic = oncekiDugum;
}//tersCevir fonksiyonu sonu

void yazdir()
{
    if(baslangic == NULL)
    {
        printf("\n Listede Hic dugum yok, lutfen dugum ekleyin");
    }
    else
    {
        geciciDegisken = baslangic;
        printf("\n********************\n");
        while(geciciDegisken->sonraki != NULL)
        {
            printf("%d ", geciciDegisken->veri);
            geciciDegisken = geciciDegisken->sonraki;
        }
        printf("%d ", geciciDegisken->veri);
        printf("\n");
    }

}
void selection(int choise); //fonksiyon deklaresi

//ana fonksiyon
void menu()
{
    while(1 == 1)
    {
        printf("\n**** Algoritma Uzmani ****");
        printf("\n1- Sona Eleman Ekle ... ");
        printf("\n2- Basa Eleman Ekle ... ");
        printf("\n3- Araya Eleman Ekle ... ");
        printf("\n4- Sondan Eleman Sil ... ");
        printf("\n5- Bastan Eleman sil ... ");
        printf("\n6- Aradan Eleman Sil ... ");
        printf("\n7- Listeyi ters cevir (reverse) ... ");
        printf("\n seciminizi yapin ...\a ");
        scanf("%d", &choise); //kullanýcýdan veri alýnýr
        selection(choise);
    }//while sonu

}

//seçim fonksiyonu
void selection(int choise)
{
    int item, i, index;
    switch(choise)
    {
        case 1:

            printf("\n Kac tane dugum ekleyeceksiniz? ... ");
            scanf("%d", &item);
            for(i = 0; i < item; i++)
            {
                printf("\n %d. sayiyi ekleyin... ", i+1);
                scanf("%d", &choise);
                sonaEkle(choise);
                yazdir();
            }
            break;
        case 2:
            printf("basa ekleyeceginiz sayiyi girin ... ");
            scanf("%d", &item);
            basaEkle(item);
            yazdir();
            break;
        case 3:
            printf("Hangi sayiyi ekleyeceksiniz? ...");
            scanf("%d", &item);
            printf("hangi indise ekleyeceksiniz (indis 0'dan baslar) ");
            scanf("%d", &index);
            arayaEkle(item, index);
            yazdir();
            break;
        case 4:
            sondanSil();
            yazdir();
            break;
        case 5:
            bastanSil();
            yazdir();
            break;
        case 6:
            printf("\n Hangi Sayiyi Silmek istiyorsunuz? ...");
            scanf("%d", &item);
            aradanSil(item);
            yazdir();
            break;
        case 7:
            tersCevir();
            yazdir();

    }
}

int main()
{
    menu(); //fonksiyon çaðrýlýr
}//main sonu

