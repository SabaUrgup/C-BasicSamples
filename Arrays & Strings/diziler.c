#include<stdio.h>

int main(){
/* ayn� veri �e�idinden olan de�i�kenlerin ayn� isim a�t�nda tan�mlanmas�na dizi denir.*/ 

//int, char, float, double veri tipinde tan�mlan�rlar.

// tek boyutlu diziler  => veri_tipi dizi_adi[boyut];

// �ok boyutlu diziler  => veri_tipi dizi_adi[boyut1][boyut2]...[boyutn];

// tek boyutlu eleman say�s� tan�ms�z dizi  => veri_tipi dizi_adi[]={eleman1, eleman2, ... elemann};


/*
int idizi[10]; // 10 elemanl� tek boyutlu int dizi
char cdizi[10]; //10elemanl� tek boyutlu char dizi

int idizi[3][4]; // 12 elemanl� �ok boyutlu int dizi
char cdizi[5][6]; //30 elemanl� �ok boyutlu char dizi

int idizi[]={1,2,3,4,5};

char cdizi[]={'K','a','r','a','k','\0'};

char cdizi[]={"Rakam"};
*/


//strcpy: char *strcpy(char *cdizihedef, const char *cdizikaynak); a��klama: kaynak dizinin elemanlar�n� al�r hedef dizideki elemanlar�n yerine yazar ve hedef dizideki elemanlar� siler.
//strcat: char *strcat(char *cdizihedef, const char *cdizikaynak); a��klama: kaynak dizideki elemanlar� hedef dizideki elemanlar�n yan�na ekler. Silme i�lemi yoktur.
//strcmp: int *strcmp(char *cdizi1, const char *cdizi2); a��klma: dizi1 ve diz2 elemanlra� aras�nda kar��la�t�rma yapar
																//karakter kar��la�t�rmas�nda alfabetik s�ray� dikkate al�r.
																//dizi1>dizi2 ise s�f�rdan k���k bir de�er g�nderir. dizi1<dizi2 ise s�f�rdan b�y�k bir de�er g�nderir.
																
//strlen: size_t strlen(const char *cdizi); a��klama: bir karakter sizisinin uzunlu�unu verir. Dizinin sonundaki \0 de�erini dikkate almaz.


char cdizi1[50], cdizi2[20];

printf("bir karakter dizisi giriniz: (20 karakterden az)");
gets(cdizi1); //gets() klavyeden bir karakter dizisi okur.

printf("bir karakter dizisi giriniz: (20 karakterden az)");
gets(cdizi2); //gets() klavyeden bir karakter dizisi okur. 																
															
printf("\n %s \n", cdizi1, cdizi2),

printf("karakter dizilerinin uzunluklari: %d %d \n", strlen(cdizi1), strlen(cdizi2));


if(!strcmp(cdizi1,cdizi2))	printf("karakter dizileri birbirine e�ittir.");

else printf("karakter sizileri birbirine e�it de�ildir.");



strcat(cdizi1,cdizi2);
printf("\n %s \n", cdizi1); //iki dizinin birle�imi

strcpy(cdizi1,cdizi2);
printf("%s \n",cdizi2); 
return 0;															
}
