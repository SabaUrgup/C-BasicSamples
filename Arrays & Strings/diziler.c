#include<stdio.h>

int main(){
/* ayný veri çeþidinden olan deðiþkenlerin ayný isim aþtýnda tanýmlanmasýna dizi denir.*/ 

//int, char, float, double veri tipinde tanýmlanýrlar.

// tek boyutlu diziler  => veri_tipi dizi_adi[boyut];

// çok boyutlu diziler  => veri_tipi dizi_adi[boyut1][boyut2]...[boyutn];

// tek boyutlu eleman sayýsý tanýmsýz dizi  => veri_tipi dizi_adi[]={eleman1, eleman2, ... elemann};


/*
int idizi[10]; // 10 elemanlý tek boyutlu int dizi
char cdizi[10]; //10elemanlý tek boyutlu char dizi

int idizi[3][4]; // 12 elemanlý çok boyutlu int dizi
char cdizi[5][6]; //30 elemanlý çok boyutlu char dizi

int idizi[]={1,2,3,4,5};

char cdizi[]={'K','a','r','a','k','\0'};

char cdizi[]={"Rakam"};
*/


//strcpy: char *strcpy(char *cdizihedef, const char *cdizikaynak); açýklama: kaynak dizinin elemanlarýný alýr hedef dizideki elemanlarýn yerine yazar ve hedef dizideki elemanlarý siler.
//strcat: char *strcat(char *cdizihedef, const char *cdizikaynak); açýklama: kaynak dizideki elemanlarý hedef dizideki elemanlarýn yanýna ekler. Silme iþlemi yoktur.
//strcmp: int *strcmp(char *cdizi1, const char *cdizi2); açýklma: dizi1 ve diz2 elemanlraý arasýnda karþýlaþtýrma yapar
																//karakter karþýlaþtýrmasýnda alfabetik sýrayý dikkate alýr.
																//dizi1>dizi2 ise sýfýrdan küçük bir deðer gönderir. dizi1<dizi2 ise sýfýrdan büyük bir deðer gönderir.
																
//strlen: size_t strlen(const char *cdizi); açýklama: bir karakter sizisinin uzunluðunu verir. Dizinin sonundaki \0 deðerini dikkate almaz.


char cdizi1[50], cdizi2[20];

printf("bir karakter dizisi giriniz: (20 karakterden az)");
gets(cdizi1); //gets() klavyeden bir karakter dizisi okur.

printf("bir karakter dizisi giriniz: (20 karakterden az)");
gets(cdizi2); //gets() klavyeden bir karakter dizisi okur. 																
															
printf("\n %s \n", cdizi1, cdizi2),

printf("karakter dizilerinin uzunluklari: %d %d \n", strlen(cdizi1), strlen(cdizi2));


if(!strcmp(cdizi1,cdizi2))	printf("karakter dizileri birbirine eþittir.");

else printf("karakter sizileri birbirine eþit deðildir.");



strcat(cdizi1,cdizi2);
printf("\n %s \n", cdizi1); //iki dizinin birleþimi

strcpy(cdizi1,cdizi2);
printf("%s \n",cdizi2); 
return 0;															
}
